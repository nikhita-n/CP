//find shortest path from one vertex to another in a directed graph

//Variants
Source-sink : from one vertex to another
Single-source: from one vertex to all the others
All pairs: between all pairs.

class SP{
    private: 
    int source; 
    vector<DirectedEdge> edgeTo;//edgeTo[v] is the last edge on shortest path from s to v 
    vector<double> distTo;//distTo[v] is the length of shortest path from s to v, intitialise with inf
    void relax(DirectedEdge e)
    {
        int v=e.from(),w=e.to(v);
        if(e.weight()+distTo[v]<distTo[w]) //each distTo[v] can decrease only finite number of times
        {
            edgeTo[w]=e;
            distTo[w]=e.weight()+distTo[v];
        }
    }
    public:
    SP(EdgeWeightedDiGraph G,int s) //s is the source vertex
    double distTo(int v) //lenght of shortest path from s to v
    vector<DirectedEdge> pathTo(int v) //shortest path from s to v
};

vector<DirectedEdge> SP::pathTo(int v)
{
    stack<DirectedEdge> path; //this has our path, print from top
    for(DirectedEdge e=edgeTo[v];e!=NULL;e=edgeTo[e.from()])
        path.push(e);
    return path;
}

//Properties
    1)Edge relaxation
        Relax edge e=v->w 
            -distTo[v] -- length of shortest path from s to v
            -distTo[w] -- length of shortest path from s to w 
            -edgeTo[w] -- the last edge on the shortest path form s to w 
        If e=v->w gives a shorter path to w through v, than distto[w],
            update both distTo[w] and edgeTo[w]

//Generic algorithm
    -Initiallize distTo[s]=0 and distTo[v]=inf for all vertices
    -Repeat until optimality conditions are satisfied:
        -Relax any edge

//Efficient implementation: How to choose which edge to relax