//the following holds good for connected graphs 
check if all nodes have even degree:
YES
    1)print vertices starting from anywhere
else if number of vertices with odd degree==2:
YES:
    1)find odd degree node
    2)start from odd degree node and print.

else
NOT bipartite

/*Implementation - pseudocode*/

n=number of vertices in the graphs
m=number of edges in the graphs
g=adjacency list representing graphs
out = an array representing  degree of each node 
path = linked list data structure

function findEulerianPath():
    if(!isEulerianPath(g,out,n,m))
        return NULL
    dfs(findStartNode()) 

    if path.size() == m+1 :
        return path

    return NULL //this happens if graph is disconnected.

function findStartNode():
    start=0;
    for(int w=0; w< n;w++):
        if(out[w]%2)
            return w
        if(out[w]>0) 
            start=w //0th vertex maybe a singleton, to prevent dfs on that we choose such a node
    return start

function dfs(at):
    while(out[at]!=0]):
        next_edge=g[at].get(--out[at])
        dfs(next_edge)
    path.insertFirst(at) //insert at the beginning





