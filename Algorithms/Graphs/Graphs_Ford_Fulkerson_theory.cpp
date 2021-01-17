//Ford-Fulkerson algorithm:
    /********IDEA*********/
    -initialize all edges to have capacity 0. 
    Augmenting paths: Find 'undirected path' from s to t such that:
        -You can increase flow on forward edges(not fully), but by bottleneck capacity
        -Can decrease flow on backward edge(not empty)

    This takes care of the equilibirum condition

    //Termination:
    All paths from s to t are blocked either by a 
        -full forward edge
        -empty backward edge

    //APPRoach
        -start with 0 flow
        -While there exists an augmenting path:
            -find an augmenting path(any graph search works)
            -compute bottleneck capacity
            -increase flow on that path by bottleneck capacity

    //Integrality theorem
        There exists an integer-valued maxflow.
        FF terminates and maxflow it finds is iteger.
    
     //IMPORTANT SPL CASE
        "<Edge capacities are integers between 1 and U>"
        #INVARIANT - Flow is "integer-valued" throughout Ford-Fulkerson
            (BY INDUCTION - PROOF)
                -Bottleneck capacity is an integer
                -Flow on an edge increases/decreases by bottleneck capacity
            
            Number of augmentations <= value of maxflow 
            //u will make augmentations to increase the flow f

           'Each augmentation increases the value by atleast 1'

           \\this means u will need maximum f iterations to find the flow. //f is the maxflow
            
            \\AVOIDED BY USING THE SHORTEST PATH/FATTEST PATH. (the one using which you can push the most flow thru)\\
    
    //CHOOSING AUGMENTING PATH

        augmenting path     |   number of paths     |   Implementation
                            |                       |                           
            shortest paths  | <=(EV)/2 /*(proven)*/ |   queue(BFS)
            fattest path    |  <=Eln(E*U)           |   priority queue //implementation similar to DIJKSTRA's
            random path     |<=E*U                  |   randomized queue
            DFS Path        |<=E*U                  |   stack(DFS)

    #DIGRAPH_WITH_V_VERTICES_E_EDGES_&_integer_capacities(max of which is U) 
    
    //fattest path : augmenting path with maximum bottleneck capacity

    Depending on the network u have u could use any approach.

    