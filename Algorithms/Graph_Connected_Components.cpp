/*Used for connectivity
Is v connected to w in constant time  
Implementation : using adjacency lists*/
/*Connection is an equivalence relation: reflexive,symmentric, transitive*/

/*Connected components - maximal set of connected vertices*/

//ADT
public class CC{
    CC(Graph G) //Constructor
    boolean conncted(int v,int w)//are v and w connected?
    int count()//number of connected components
    int id(int v)//component identifier
}

/*BASIC IDEA:
  form groups of connected components and id of all vertices belonging to the same group is same*/

Connected components
1.Initialize all vertices as unmarked
2.For every unmarked vertex,
  {  Run dfs from a vertex //in dfs mark id as count
     count++;
  }
3.This will give all vertices discovered using that vertex
