/*                 space    add edge    edge between v and w    iterate over all edges of v
adjacency matrix    V^2     1           1                       V
adjacency lists     E+V     1           degree(v)               degree(v)
*/
/*Graph challenges
    1)Is a graph bipartite? 
      is it possible to divide the graphs into two sets of vertices such that  every edge connects a vertex
      in one subset to a vertex in another - possible using DFS
    
    2)Find a cycle 
      Possible - DFS

    3)7-bridges-of-Konisberg
     Possible

    4)Find a cycle that visits every vertex exactly once - also known as travelling salesperson problem - he wants to visit every city without retracting his steps
      Hamiltonian cycle - classical NP complete problem

    5)Find a cycle that visits every edge exactly once 
      Possible
    
    6)Are two graphs identical except for vertex names? - graph isomorphism problems
      Longstanding open problem 
      classification also not known

    7)Lay out a graph in the plane without crossign edges
      Linear time DFS based planarity algo
      discovered by Tarjan in 1970
      very complex