APPLICATIONS:

    1)Euclidean MST:
        -Given N points in te plane, find MST connecting them, 
        where the distances between point pairs are their Euclidean distance
        (distance formula in coordinate geometry)
        
        Approach:
        -O(ElogE) - prim's algo
            here E=N(N-1)/2 - quadratic time
        -O(NlogN) - geometrical observation
            -build subgraph,each point connected to a certain number of points that are close to
            it. There's a particular graph called the
            Voronoi diagram, or the Delaunay triangulation, that does that.
            And it's been proved, number one that, that graph has linear number of edges not,
            quadratic, and it's also the MST is a sub graph of the d-linear triangulation.
            So you can get it done in linear arrhythmic time for Euclidean MST

    2)K-clustering
        -Divide a set of objects, classify into k coherent groups
         //Goal - divide into clusters so that objects in different clusters are far apart.

    3)Variant of the above - //single link clustering
            single-link - distance between 2 clusters equals the distance
                          between the two closest objects(one in each cluster)
                
            single-link clustering - Given an integer k, find a k-clustering that maximizes 
                                     the distance b/w 2 clusters
        //Approach
        -Apply kruskal until there are exactly K clusters.
        - run prim's algo and get rid of the k-1 maximum weight edges.
        