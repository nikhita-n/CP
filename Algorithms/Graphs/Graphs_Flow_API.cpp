/**FLOWEDGE */

//Residual capacity:                               //
    Forward edge: residual capacity=c_e - f_e       //  used to calculate the bottleneck capacity
    Backward edge: residual capacity = f_e          //

//Augment flow:
    -forward edge: add diff.
    -backward edge: subtract diff

#API

class FlowEdge{
    private:
    int v,w; //from and to
    double capacity; //capacity of the edge
    double flow;//flow of the edge
    public:
    FlowEdge(int v,int w,double capacity) //create a flow edge v->w
    int from()  //vertex this edge is from
    int to()    //vertex this edge points to
    int other(int v)    //other ednpoint
    double capacity()   //capacity of this edge
    double flow()       //flow in this edge
    double residualCapacityTo(int vertex) //residual capacity towards v
    void addResidualFlowTo(int vertex,double delta) //add delta flow toward v

}

double FlowEdge::residualCapacityTo(int vertex)
{
    if(vertex==v)
        return flow; //backward edge - the edge is going from w to v.
    else if(vertex==w)
        return capacity-flow;//forward edge: edge is going from v to w
}

double FlowEdge::addResidualFlowTo(int vertex, double delta)
{
    if(vertex==v)
        flow-=delta; //backward edge - the edge is going from w to v.
    else if(vertex==w)
        flow+=delta;//forward edge: edge is going from v to w
    
}

/***FLOWNETWORK***/

//Flow network representation:
FlowEdge Datatype - to associate flow f_e and capacity c_e, with edge e = v->w
    #RESIDUAL_NETWORK
        forward edge(the direction in which the original edge is) - RESIDUAL_CAPACITY
        backward edge - flow of the edge
        "Sum of the two equals the capacity of the edge"
    /*NOTE: AUGMENTING PATH IN ORIGINAL NETWORK equals DIRECTED PATH IN RESIDUAL NETWORK"*/

//flow network data type:
Need to process edge e=v->w in either direction: include e in both v and w's adjacency lists.'

class FlowNetwork{
    private:
    int V;
    vector<FlowEdges> *adj;
    FlowNetwork(int V) //create empty flow network with V vertcies
    {
        this->V=V;
        for(int v=0;v<V;v++)
            (*(adj+v))=new vector<FlowEdge>;
    }
    void addEdge(FlowEdge e) //add flow edge e to this flow network //add to both adj lists of v and w
    vector<FlowEdge> adj(int v) //return forward and backward edges incident to v
    vector<FlowEdge> edges() //all edges in this flow network
    int V() //number of vertices
    int E() //number of edges
}
"ALLOW SELF LOOPS AND PARALLEL EDGES"

void FlowNetwork::addEdge(FlowEdge e){
    int v=e.from();
    int w=e.to();
    adj[v].push_back(e); //adding to both adjacency lists
    adj[w].push_back(e);
}

