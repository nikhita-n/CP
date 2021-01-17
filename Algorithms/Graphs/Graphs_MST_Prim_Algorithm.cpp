/*IDEA:
    -Start with vertex 0 and greedily grow the MST one edge at a time T
    -Add to T the min weight edge with exactly one endpoint in T, thus ensuring it is connected, i.e u add shortest edge from a tree vertex to a non-tree vertex
    -Repeat until V-1 edges
*/

Challenge: Find min weight edge with exactly one endpoint in T.
            1)O(E) - try all edges //brute force
            2)O(logE) - priority_queue //only heapify is enough - lazy implementation
            3)O(logV)                          //Eager implementation

/*Lazy implementation - Time:O(ElogE) and space:O(E)*/
    -Maintain a Prioirty queue of edges with atleast one endpoint in T.
    -In PQ, Key=edge , priority = weight of edge
    -e=Delete-min. 
    -Disregard e if both end-points(v and w) are in T.
    -otherwise let w be the vertex not in T:
        -add to PQ, all edges incident to w and the other endpoint not in T 
        -add w to T
//PseudoCode 
PQ - priority queue
mst - queue containing edges of the MST
bool marked[V]
visit(G,0) //assume G is connected
while(!pq is not empty){
    Edge e=delete_min(PQ);
    int v=e.either(),w=e.other();
    if(marked[v] && marked[w]) continue; //vertices already on mst so ignore it
    mst.enqueue(e);
    if(!marked[v]) visit(G,v); //checking which of the vertices does not belong to the tree, to visit it and add its edges to priority queue
    if(!marked[w]) visit(G,w);
}

void visit(EdgeWeightedGraphs G,int vertex)
{
    marked[v]=true;
    for(Edge e:G.adj_list(v))
    {
        if(!marked[e.other(v)])
            PQ.insert(e);
    }
} 

/*Eager implementation - O(ElogV)*/
    -Maintain a PQ of vertices connected by an edge to T, where priority of vertex v=weight of shortest edge connecting v to T.
    -Key=vertex, priority = weight of edge
    -maintain an array of edgeTo[w] the vertex that takes you to w from vertex v 
