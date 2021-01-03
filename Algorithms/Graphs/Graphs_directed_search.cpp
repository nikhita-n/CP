normal DFS
/*Application of DFS:
    1)Program-flow control analysis 
        -helps detecting unreachable code
        -also infinite loops are detected

    2)mark-sweep garbage collector -- frees up space
        -Vertex: object
        -Edge: reference
        -Roots: objects known to be directly accessible by the program(eg:stack)
        -all unmarked objects after DFS,indicating they r not reachable, are freed
*/
normal BFS can also be used.
MULTIPLE- source shortest paths: given a digraph and a set of source vertcies, find shortest paths from any vertex in the set to each other vertex.
//IMPLEMENTATION
Use BFS but initiialize by enqueueing all source vertices

/*Application of BFS:
    1)Web crawler: crawl the whole web, starting from a root web page 
        use implicit digraph:
            1)choose root webpage as source s
            2)maintain queue of websites to explore
            3)maintain a set of discovered websites
            4)dequeue the next website and enqueue websites to which it links, provided it hasnt been discovered before

