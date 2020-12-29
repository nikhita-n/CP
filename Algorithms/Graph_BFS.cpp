/*Not recursive, uses queue
V- number of vertices
Graph G
bool marked[V]={false}
int edgeTo[V]
int pathlength[V]={0} // pathlength from v
 */
 /*Time complexity: O(E+V) - specifically pathlength found in this time*/
queue<int> BFS_order;
BFS_order.push(s);

void BFS(Graph G){

    while(!BFS_order.isEmpty()){
    s=BFS_order.dequeue();
    for(int w:G.adj(s))
        if(!marked[w])
           {
                BFS_order.enqueue(w);
                edgeTo[w]=s;
                pathlength[w]=pathlength[s]+1;
           } 
    marked[s]=true;
    }
}
BFS finds shortest path from s to any vertex v
BFS visits each vertex only once