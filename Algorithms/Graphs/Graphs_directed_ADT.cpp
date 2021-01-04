/*Digraph problems:
PATH: Is there a directed path from s to t
SHORTEST PATHS: Shortest directed path from s to t
TOPOLOGICAL SORT: Can you draw a digraph so that all edges point upwards?
STRONG CONNECTIVITY: Is there a directed path between all pair sof vertices?
TRANSITIVE CLOSURE: For which vertcies v and w, there is a path from v to w
PageRank: hyperlinks are directed graphs, pagerank algos could use this*/

public class Digraph {
    Digraph(int V) 
    void addEdge(int v,int w) // adds directed edge from v to w
    vector<vector<int>> adj; //adjacency list
    int V() //number of vertices
    int E() //number of edges
    Digraph reverse() 
}G;
void Digraph:: addEdge(int  v,int w)
{
    adj[v].push_back(w);
}
void Digraph:: Digraph(int V)
{
    this.V=V;
    adj=new 
    for(int v=0;v<V)
}
//printing edges:
for(int v=0;v<G.V();v++)
    for(int w:G.adj[i])
        printf("%d->%d",v,w);

/*/*                 space    add edge    edge from v to w    iterate over all vertcies of v
adjacency matrix    V^2     1           1                       V
adjacency lists     E+V     1           outdegree(v)            outdegree(v)