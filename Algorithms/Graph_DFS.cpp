/*Application: 
find all vertices connected to a given source vertex
find a path between two vertices
*/
/*
V - number of vertices, s is the source
bool marked[V];
int edgeto[V]; - stores parent to i. for i from 1 to n //
*/
/*Complexity:
Time:O(2*E)*/
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

}
//find path between two vertices s and w,a
stack<int> path;
int hasPath(Graph G,int w,int s){
    if(!haspath(w)) return NULL;
    while(edgeto[w]!=s) //s is the source vertex , 0 here
    {
        path.push(edgeto[w]);
        w=edgeto[w];
    }
    path.push(s)
    return path;
}

//find all vertices that are connected to s
connected(Graph G)
{
    dfs(G,s); // s is from where u r checking connectivity
    for(int w;w<G.V();w++) //G.V() returns number of vertices in graph G
        if(haspath(w)) //haspath returns marked[w]
            print(w);
}

