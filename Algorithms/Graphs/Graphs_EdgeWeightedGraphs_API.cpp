Edge-weighted Graph API //useful for MST

  class Edge { //makes edges parallel entities
  private: int v,w; //allows self loops and parallel edges 
  private: double weight;
  public:
  Edge(int v,int w,double weight) //creates a weighted edge v-w
  int either()                    //returns one endpoint
  int other(int v)                //returns the endpoint that is not v
  int compareTo(Edge a)        //compares this edge to edge a
  double weight()               //returns weight
}

int Edge::compareTo(Edge a)
{
  if(this->weight < a.weight)
    return -1;
  else if(this->weight > a.weight)
    return +1;
  else
    return 0;
}

  class EdgeWeightedGraph{
  private: int V;//number of vertices
  private: vector<Edge> adj[V]; //edges incident to v.
  public:
  EdgeWeightedGraph(int V) //create empty graph with V vertices
  void addEdge(Edge e) //add weighted adge e to this graph
  vector<Edge> adj_list(int v) //to get all edges incident on vertex v
  {
    return adj[v]; 
  }
  int V() //returns number of vertices
  vector<Edge> edges() //returns all edges
}
void EdgeWeightedGraph::addEdge(Edge e){
  int v=e.either(),w=e.other(v);
  adj[v].push_back(e); //e is added to the adjacency lists of v and w, since adj is the edges incident on both
  adj[w].push_back(e); 
}