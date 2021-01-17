/****shortest paths from a source to all other vertices*****/
/*******DAGs can have negative edge-weights**********/
    -since u know there are no cycles present,
    -Consider vertices in topological order - O(V+E)
    -relax all edges coming from that vertex - O(E)
    -faster than general thing done using Dijkstra

/****longest paths from a source to all other vertices****/
    Formulated as a shortest paths problem in edge weighted DAGs
        -Negate all weights         //
        -Find shortest paths.       //  equivalent: reverse sense of equality in relax
        -Negate weights in result.  //

//Longest paths applications