/*Vertices v and w are strongly connected if there is a directed path from v to w and a directed path from w to v.
    Equivalence relation:
    Reflexive: v connected strongly to v
    Symmetric:
    Transitive: if v connected strongly to w and w to x, then v is connected strongly to x
*/
/*Graphs are divided into sets of strongly connected nodes - strongly connected components*/

/*IDEA - KOSARAJU-SHARIR ALGORITHM (runs DFS twice)- time complexity - O(V+E)
    Reverse graph - graph obtained by reversing the directions of all edges
                  - strong components in G are same in Gr
    Kernel DAG - Contract each strong component into a single vertex
    
    1)Compute topological order in reverse graph(Gr)
    2)Run DFS, considering vertices in reverse topological order*/


/*APPLICATIONS:
    Software module dependency graph
    Vertex: software modules
    Edges: module to dependency
    Vertex: subset of mutually interacting modules - strong components
        1)Package strong components together
        2)USe to improve design
