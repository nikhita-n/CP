/*In a set of n objects,
Union command: connect two objects
Find/connected query: Is there a path connecting the two?

NOTE:union(4,3) means add an edge between 4 and 3
     connected(0,7) means Is there a path connecting 0 and 7

"Is connected to" is an equivalence relation

Connected components: same as graph, union command will just take the union of the two sets
                      maintain id array and vertcies with same id value belong to one connected component
                      initially id[i]=i
*/

UNION-FIND API - used for dynamic connectivity

public class UF{
    UF(int N) //N is the number of objects
    void union(int p,int q) //this will unionate the connected components' sets of vertcies p and q, if they are not already connected
    boolean connected(int p,int q);
}

//QUICK-Find - eager approach - for N union queries, O(N^2)

/*find - in the id array, same as connected components*/
Find - Each find takes O(1): check if vertices p and q have the same id.
Union - Each union takes O(N): union(p,q) - To merge components containing p and q, change all entries whose id equals id[p] to id[q]

//Quick-find - lazy approach - for N union queries,O(NlogN) - for balanced trees

//But worst case(in case of skewed treees) union-O(N) and find-O(N)

/*IDEA*/
id[i] array contains parent of i //initially id[i]=i  - each node is its own root
root of i is id[id[id[id[..id[i]...]]]] - keep going until it doesnt change

indices with same root form one connected component
find - check if p and q have the same root 
union(p,q) - make id[p]'s root = id[q]'s root //each union operation changes only one element in the array
/*Pseudocode*/
public class QuickUnionFindUF{
    private vector<int> id;//initialize each id[i] to i - O(N) 
    private int root(int i){ 
        while(i!=id[i]) i=id[i];
        return i;
    }
    public void union(int p,int q){
        int i=root(p);
        int j=root(q);
        id[i]=j;
    }
}
};

//Improvements on QUICK UNION

    1)Avoid tall trees - //now root operation will be done in O(lgN) time, but extra space of O(N) is used
        -Keep track of size of each trees
        -Always make sure by linking root of small tree to root of large tree
      
        //IMPLEMENTATION
        int sz[N]={0}//size array 
         public void union(int p,int q){
        int i=root(p);
        int j=root(q);
        if(i==j) return;
        if(sz[i] < sz[j]) {id[i]=j;sz[j]+=sz[i];} //size of the larger tree increases
        else {id[j]=i;sz[i]+=sz[j];}
        }

    2)Path-compression - flattening the tree further - O(logN)
        private int root(int i)
        {
            while(i!=id[i])
            {
                id[i]=id[id[i]]; //flattening step
                i=id[i];
            }
            return i;
        }

    3) Combination of (1) and (2) - Hopcroft-Ulman, Tarjan
            -starting from any empty data structure, any sequence of M union-find 
             operations on N objects makes <= c(N+Mlg*N) array accesses
             //lg*N - how many lgN required to make N 1; while(N>1){N=lgN}
             //interesting fact, lg*N of N = 2^65536 = 5
            -analysis can be improved to N+Malpha(M,N);
            -very close to linear in practice

/*APPLICATIONS*/
    1)percolation
     -given a grid of NxN dimension
     -each site is open with probability p (meaning it is blocked with probability 1-p)
     -system percolates iff top and bottom are connected by open sites.
     -if it percolates or not depends on p.
        For large N, threshold p* is sharp
        -value of p* = 0.593 approx for large sqare lattices , found computationally using Monte carlo simulation
        -if p>p*, almost certainly percolates
        -if p<p* , does not percolate
      -solved using union-find, but we need a virtual top and virtual bottom 