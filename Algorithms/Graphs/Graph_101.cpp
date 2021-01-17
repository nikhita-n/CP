/*                 space    add edge    edge between v and w    iterate over all edges of v
adjacency matrix    V^2     1           1                       V
adjacency lists     E+V     1           degree(v)               degree(v)
*/

/*Graph challenges
    1)Is a graph bipartite? 
      is it possible to divide the graphs into two sets of vertices such that  every edge connects a vertex
      in one subset to a vertex in another - possible using DFS
      Note: a set cant have edges from one vertex to another, within the set
      
      IMPORTANT:From the property of graphs we can infer that , A graph containing odd number of cycles or Self loop  is Not Bipartite.

    2)Find a cycle 
      Possible - DFS
      in edgetoarray, if the ancestor(greater than parent) and a node are connected by an edge then there is a cycle

    3)7-bridges-of-Konisberg - this problem can't be solved, proven mathematically
     Eulerian path - visits every edge in the graph exactly once 
     all vertices to have even degree, any 2 can have odd degree.
     basically u start from the odd degree node and finish at the other odd degree node in such cases.

    4)Find a cycle that visits every vertex exactly once - also known as travelling salesperson problem - he wants to visit every city without retracting his steps
      Hamiltonian cycle - classical NP complete problem

    5)Find a cycle that visits every edge exactly once (Euler tour)
      Possible - refer 3)
    
    6)Are two graphs identical except for vertex names? - graph isomorphism problems
      Longstanding open problem 
      classification also not known

    7)Lay out a graph in the plane without crossign edges
      Linear time DFS based planarity algo
      discovered by Tarjan in 1970
      very complex