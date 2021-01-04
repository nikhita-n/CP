/*Digraphs must be a Directed Acyclic Graph - DAG*/
Algorithm:
    Run DFS
    Get reverse DFS postorder (put it on a stack) //print it once u r done with that vertex
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
NOTE: FOR TOPOLOGICAL SORT JUST REVERSE postorder LIST.