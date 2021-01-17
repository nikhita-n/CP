class FordFulkerson{
    private:
    bool *marked; //true if s->v path in residual network
    FlowEdge *edgeTo;   //last edge on s->v path
    double value; //value of flow (final flow which u receive at target)
    bool hasAugmentingPath(FlowNetwork G,int s,int t)
    public:
    FordFulkerson(FlowNetwork G,int s,int t)
    {
        value=0.0;
        while(hasAugmentingPath(G,s,t)){
            double bottle = numeric_limits<double>::max();
            for(int v=t;v!=s;v=edgeTo[v].other(v))                  //computing bottleneck capacity
                bottle=min(bottle,edgeTo[v].residualCapacityTo(v));
            
            for(int v=t;v!=s;v=edgeTo[v].other(v))      
                edgeTo[v].addResidualFlowTo(v,bottle);              //augmenting flow
            
            value+=bottle
            
        }
    }

    double value(); //returns value,i.e, final flow at target
    bool inCut(int v)   //is v reachable from s in residual network
        return marked[v];
}

bool FordFulkerson::hasAugmentingPath(FlowNetwork G,int s,int t) //finding shortest augmenting path using BFS
{
    edgeTo = new FlowEdge[G.V()];
    marked = new bool[G.V()]; 
    queue<int> q;
    q.enqueue(s);
    while(!q.empty())
    {
        int v=q.front(); q.pop();
        for(FlowEdge e:adj(v))
        {
            int w=e.other(v);
            if(e.residualCapacityTo(w)>0 && !marked[w]) //!marked[w] - is there a path from s to w on the residual network
            {                                           //e.residualCapacityTo(w)>0 - e=v→w is either a forward edge that is not full or a backward edge that is not empty.
                edgeTo[w]=e;
                marked[w]=true;
                q.enqueue(w);
            }
        }
    }
    return marked[t];
}