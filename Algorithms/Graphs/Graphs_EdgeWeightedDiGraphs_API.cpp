//weighted directed edge API - used in maps

class DirectedEdge{
    private: int v,w; double weight;
    public:
    directedEdge(int v,int w,double weight) //weighted edge v-w
    int from() //vertex v
    int to() //vertex w
    double weight()

}

class EdgeWeightedDiGraph{
  private: int V;//number of vertices
  private: vector<Edge> adj[V]; //edges incident to v.
  public:
  EdgeWeightedDiGraph(int V) //create empty graph with V vertices
  void addEdge(DirectedEdge e) //add weighted adge e to this graph
  vector<Edge> adj_list(int v) //to get all edges incident on vertex v
  {
    return adj[v]; 
  }
  int V() //returns number of vertices
  vector<Edge> edges() //returns all edges
}

void EdgeWeightedDiGraph::addEdge(DirectedEdge e){
  int v=e.from();
  adj[v].push_back(e); //e is added to the adjacency lists of v, the from vertex.
}