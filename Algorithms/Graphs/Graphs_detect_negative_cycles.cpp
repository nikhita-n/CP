To the API for SP add methods, 
    -bool hasNegativeCycle() //detects negative cycle
    -vector<DirectedEdge> negativeCycle() //negative cycle reachable from s
class SP{
    private: 
    int source; 
    vector<DirectedEdge> edgeTo;//edgeTo[v] is the last edge on shortest path from s to v 
    vector<double> distTo;//distTo[v] is the length of shortest path from s to v, intitialise with inf
    void relax(DirectedEdge e)
    public:
    SP(EdgeWeightedDiGraph G,int s) //s is the source vertex
    double distTo(int v) //lenght of shortest path from s to v
    vector<DirectedEdge> pathTo(int v) //shortest path from s to v
    bool hasNegativeCycle() //detects negative cycle
    vector<DirectedEdge> negativeCycle() //negative cycle reachable from s
};

//Approach
    -On applying Bellman-Ford, if there is a neg cycle, it gets stuck in a loop,
     updating distTo[] and edgeTo[] entries of vertices in the cycle

    -if distTo[v] of a vertex gets updated with every pass but edgeTo[v] remains same, that means it is in a cycle.
        -trace back edgeTo[v] to find out the cycle.

//application-currency change
    -arbitrage detection
        -Vertex=currency
        -Edge=Transaction, with weight equal to exchange rate
        -Find a directed cycle whose product of edge weights is >1
        //To convert to shortest path problem
        -Take -ln of edge weight
        -Then look for negative cycles (<0)