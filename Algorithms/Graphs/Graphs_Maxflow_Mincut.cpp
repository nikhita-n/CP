//MAXFLOW PROBLEM
    I/P: An edge-weighted digraph, source vertex s and target veretx t.
         (Each vertex must have a positive capacity)

    //st-flow
    assignment of values to edges such that 
        -capacity constraint: 0 <= 'edge's flow' <= 'edge's capacity
        -local equilibirum at vertcies: inflow=outflow at every vertex(Except s and t)

    //value of flow
    Value of flow is the inflow at t.
MAXFLOW PROBLEM:     
    MAXIMIZE flow

//Mincut problem
    I/P: Edge weighted digraph with each edge having positive capacity, source vertex s and target vertex t.

    //st-cut     
    st-cut: Partition of vertices into 2 discjoint sets, with s in one set A and t in the other set B.

    //capacity of cut
    Given a cut
    capacity: sum of capacities of edges from A to B. 

    'Min-cut problem' - find the cut with minimum capacity.

//MAXFLOW - MINCUT theorem

    //Net flow defintiion
    The net flow across a cut(A,B) is the sum of the flows on its edges from A to B minus
    the sum of the flows on its edges from B to A.
    //Flow-value lemma
    Let f be any flow and let(A,B) be any cut. 
    Then, the net flow across (A,B) equals the value of f. //f is the inflow at t

    //Relationship between flows and cuts
    "WEAK DUALITY" : Let f be any flow and let(A,B) be any cut.
                    Then value of flow <=capacity of cut
            
    //MAXFLOW - MINCUT theorem
    Augmenting path theorem: A flow is a maxflow iff no augmenting paths exist.
    Maxflow-mincut theorem: Value of maxflow=capacity of min-cut

    Equivalently one can say:
        1)There exists a cut whose capacity equals the value of flow f 
        2)f is a maxflow
        3)No augmenting path is present w.r.t to f.

//Computing mincut from a maxflow f - can be done in O(V+E):
    -By augmenting path theorem, no augmenting paths wrt f.
    -Compute A = set of vertcies connected to s by an undirected path 
     with no full or empty backward edges. 


