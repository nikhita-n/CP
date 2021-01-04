normal DFS

NOTE: DFS has both postorder and preorder traversals.
      Post-order is return the node at the head of the list after all its neighbours have been visited
      Pre-order is first put the node in the list then check its children.

Preorder means we visit the node before visiting its children. 
Postorder order means we visit the node only after visiting its children.

Refer:https://inst.eecs.berkeley.edu/~cs61b/fa18/materials/disc/discussion12sol.pdf

/*POST - ORDER DFS*/
vector<int> postorder;
void dfs(Graph G,int v) //first call is dfs(G,s)
{
    marked[v]=true;
    for(int w:G.adj(v)) //iterates thru the adjacency list of vertex v
    {
        if(!marked[w])
        {
            dfs(G,v);
            edgeto[w]=v;
        }
    }
    postorder.push_back(v);    
}

/*PRE-ORDER DFS*/
vector<int> preorder;
void dfs(Graph G,int v) //first call is dfs(G,s)
{
    marked[v]=true;
    preorder.push_back(v);
    for(int w:G.adj(v)) //iterates thru the adjacency list of vertex v
    {
        if(!marked[w])
        {
            dfs(G,v);
            edgeto[w]=v;
        }
    }   
}

/*Application of DFS:
    1)Program-flow control analysis 
        -helps detecting unreachable code
        -also infinite loops are detected

    2)mark-sweep garbage collector -- frees up space
        -Vertex: object
        -Edge: reference
        -Roots: objects known to be directly accessible by the program(eg:stack)
        -all unmarked objects after DFS,indicating they r not reachable, are freed
*/
normal BFS can also be used.
MULTIPLE- source shortest paths: given a digraph and a set of source vertcies, find shortest paths from any vertex in the set to each other vertex.
//IMPLEMENTATION
Use BFS but initiialize by enqueueing all source vertices

/*Application of BFS:
    1)Web crawler: crawl the whole web, starting from a root web page 
        use implicit digraph:
            1)choose root webpage as source s
            2)maintain queue of websites to explore
            3)maintain a set of discovered websites
            4)dequeue the next website and enqueue websites to which it links, provided it hasnt been discovered before

