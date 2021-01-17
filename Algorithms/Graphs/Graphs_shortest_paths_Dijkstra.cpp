//IDEA similar to BFS
/******IMPLEMENTATION FOR DIRECTED EDGE WEIGHTED GRAPHS*******/
/********O(ElogV)*********/
//non-negative edge wieghts, cycles possible

/*IDEA
    -Consider vertcies in increasing order of distance from s(look at distTo array)
    -Add vertex to tree and relax all edges pointing from that vertex
*/

//NOTE: every edge is relaxed exactly once

struct cmp{ //for comparison
    bool operator() (pair<int,double> const& p1,pair<int,double> const& p2){
        return p1.second>p2.second;
    }
};
class DijkstraSP{ //more suited if source is in the middle.
    private: 
    int source; 
    DirectedEdge *edgeTo;//edgeTo[v] is the last edge on shortest path from s to v 
    double *distTo;//distTo[v] is the length of shortest path from s to v, intitialise with inf
    priority_queue<pair<int,double>,vector<pair<int,double>>,cmp> pq; //minimum priority queue based on weight
    void relax(DirectedEdge e)
    {
        int v=e.from(),w=e.to(v);
        if(e.weight()+distTo[v]<distTo[w]) //each distTo[v] can decrease only finite number of times
        {
            edgeTo[w]=e;
            distTo[w]=e.weight()+distTo[v]; 
            pq.push({w,disTo[w]});
        }
    }
    public:
    Dijkstra(EdgeWeightedDiGraph G,int s) //s is the source vertex
    double distTo(int v) //lenght of shortest path from s to v
    vector<DirectedEdge> pathTo(int v)
}

void Dijkstra::DijkstraSP(EdgeWeightedDiGraph G,int s)
{
    edgeTo=new DirectedEdge[G.V()];
    distTo=new double[G.V()];
    for(int v=0;v<G.V();v++)
        distTo[v]=std::numeric_limits<double>::max(); //each is set to infinity
    distTo[s]=0;
    pq.push(make_pair(s,0.0));
    while(!pq.empty){ //pq!empty condition in case none of the vertices are connected
        
        int v=(pq.top()).first;int distance=(pq.top()).second;pq.pop(); //extracting minimum element
        if(distance>distTo[v])
            continue;
        for(DirectedEdge e:G.adj(v))
                relax(e);
                    
    }
}

//IMPORTANT
PQ implementaion |  insert | delete-min |  decrease-key | total
unordered array  |  1      |    V       |   1           |  V^2
binary heap      |  logV   |    logV    |   logV        |   ElogV //at most V insert, V delete and E decrease-key operations, each op is logarithmic in size of binary heap, atmost V
d-way heap       |dlog[d]V |  dlog[d]V  |   log[d]V     |   Elog[E/V]V
Fibonacci heap   |1        |    logV    |   1           |   E+VlogV  

//array implementation optimal for dense graph
//binary heap much faster for sparse graph