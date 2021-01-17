A spanning tree of a graph is a subgraph which is a tree(connected and acyclic) and spanning(includes all vertices)
A Spanning tree can be obtained by a DFS.
MST - minimum weighted spanning tree

How to find:
1)BRUTE -FORCE - Find all spanning trees and get the tree with the minimum weight
2)Greedy
/*CUT
CUT: partition of vertices into 2 nonempty sets
A crossing edge connects a vertex in one set with a vertex in the other
cut property: given any cut, crossing edge of min weight is in MST
*/

//Representing MST
 class MST {
    MST(EdgeWeightedGraph G) //constructor
    vector<Edge> edges() //returns edges in MST
    double weight() //returns the total weight of MST
}
Algorithm:
    1)Greedy 
        -assume edge weights are distinct
        -Graph is connected
    -The two assumptions ensure a unique MST
    Approach:
        -start with all edges colored gray
        -Find cut with no black crossing edges,color its min-weight edge black //black edge is taken in MST
        -Repeat until V-1 edges are colored black //V-1 is the number of edges in the MST
    //NOTE: The sets the cut makes are the set of vertices already in the MST and the set of vertices not in the MST
    //Each time you need to choose a cut and find minimum weight crossing edge, can be expensive.
    //So efficient algo is Kruskal's and Prim's

    //What if graph is not connected?
    Compute minimum spanning forest - MST of each connected component


Applications:
    1)Dithering
    2)Cluster Analysis
    3)Max bottleneck paths
    4)Real-time face verification
    5)LDPC codes for error correction
    6)Autoconfig protocol for ethernet bridging to avoid cycles in a network
    7)Approximation algorithms for NP-hard problems(ex:TSP, Steiner tree)
    8)Network design(communication,electrical,hydraulic,computer,road)