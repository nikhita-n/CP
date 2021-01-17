//Special case of greedy MST algorithm
/*IDEA
    -sort edges by weight
    -Add them to the MST unless doing so would create a cycle, if a cycle is created by adding that edge, ignore that edge - O(V)*/

//first shorter edges are added to MST then larger edges

Challenge: would adding edge v-w to tree create a cycle? If not, add it.
    -O(V) - run DFS from v, check if w is reachable.(NOTE: T will atmost have V-1 edges)
    -O(lg*V) - using union find data structure

//Union-find implementation 
    -Maintain a set for each connected component in T 
    -If v and w are in the same set, then adding v-w would create a cycle
    -Add v-w to T,merge sets containing v and w.
    
    //code - O(ElogE) 
    class KruskalMST{
        private: queue<Edge> mst; //mst is stored here
        public: 
        KruskalMST(EdgeWeightedGraph G){
            priority_queue<Edge,vector<Edge>,compare> pq; //check line 44; this will give the minimum
            for(Edge e:G.edges()) 
                pq.push(e);
            UF uf = new UF(G.V()); //making sets using union find 
            while(!pq.isEmpty() && mst.size()<G.V()-1) //max V-1 edges in MST
            {
                Edge e=pq.top(); //O(logE)-accesses top element, i.e min element
                pq.pop(); //top element is removed
                int v=e.ither(); w=e.other(v);
                if(!uf.connected(v,w)) //if v and w are not already connected, it is safe to add the edge
                {
                    uf.union(v,w);
                    mst.enqueue(e);
                }
            }
        }
        queue<Edge> MST_graph()
        {
            return mst;
        }
    };

    //compare
    bool compare(Edge &E1,Edge &E2){
        return E1.weight()<E2.weight();
    } 
    
    Complexity analysis - worst case - O(ElogE)//for unsorted, if sorted, O(Elog*V):

//  operation   |   frequency   |   time per op
    build pq    |   1           |   E //bottom up approach
    delete-min  |   V           |   logE
    union       |   V           |   log*V
    connected   |   E           |   log*V
                