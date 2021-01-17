//following code is for digraph, optimize it for undirected graph
//dijkstra's algo doesn't work

    DEFINITON:
    negative cycle: a directed cycle whose sum of edge weights is negative
    Shortest path tree exists iff no negative cycles.

    Bellman-Ford Algorithm
    /*IDEA*/
    /*After pass i, we hope to find shortest path containing at most i edges*/
    -initialize distTo[s]=0 and distTo[v]=inf for all vertices
    -repeat V times:
        -Relax each edge

    for(int i=0;i<G.V();i++){ //u want to visit all vertices to get the shortest possible path, negative edge could be anywhere
        for(int v=0;v<G.V();v++)
            for(DirectedEdge e:G.adj(v))
                relax(e);
    }

    //Possible improvements
        1)If distTo[v] does not change during pass i, no need to relax any edge pointing from v in pass i+1.
            FIFO implementation - maintain a queue of vertcies whose distTo[] changed.
                                  (have only one copy)
        Overall effect:
            -worst case still ExV
            -but much faster in practice


     