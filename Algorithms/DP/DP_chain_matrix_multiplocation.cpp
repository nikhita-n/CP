/* Multiply n matrices A0 to An-1 
Output order which minimizes total cost of multiplication
m0 x m1, m1 x m2, orders of the matrices 

Multiplying two matrices of of orders p x q and q x r costs O(pqr) 

BASIC IDEA
Use associativity and the above property
M(i,j) - min cost of multiplication
M(i,j)=min{M(i,k) + M(k,j) + mi*mk*mj} 
mi x mk order of M(i,k)
mk x mj order of M(j,k) 
Base case - M(i,i+1) //only one element in matrix set
/*Input: [m0,m1,m2,m3..mn] , number of matrices n*/

#define MAX //some huge num
//Recursive algorithm
unordered_map<pair<int,int>,int,boost::hash<pair<int,int>>> T;
int matrix_mult(vect<int> m,int i,int j) //i is the first index, j is the second index first call, i=0;j=number of matrices
{
    pair<int,int> p1=make_pair(i,j);
    if(T.find(p1)!=T.end())
    {   if(j==i+1)
        T[p1]=0;
        else
        {
            T[p1]=MAX;
            for(int k=i+1,k<j;k++)
                T[p1]=min(T[p1],(matrix_mult(m,i,k)+matrix_mult(m,k,j)+m[i]*m[j]*m[k]));
        }
    }
    return T[p1];
}
/*ITERATIVE ALGORITHM
IDEA: instead of iterating row by row or column by column, we calculate costs by diagonals, because size varies as u go from one diagonal to the next
size of subproblem here is number of matrices being multiplied, here, j-i for M(i,j)
on careful observation, recursion is also doing the same

Time complexity: O(n^3)
*/
int T[n+1][n+1]={MAX}
int matrix_mult(vect<int> m,int i,int j)
{
    int n;//num of matrices
    for(int i=0;i<n;i++) T[i][i+1]=0;

    for(int s=2;s<n+1;s++)
        for(int i=0;i<n-s+1;i++){
            j=i+s;
            for(int k=i+1;k<j;k++)
                T[i][j]=min(T[i][j],T[i][k]+T[k][j]+m[i]*m[j]*m[k]);
        }
    return T[0][n];
}

//reconstructing the soln, array s[i][j] storing the split
int T[n+1][n+1]={MAX}
int matrix_mult(vect<int> m,int i,int j)
{
    int n;//num of matrices
    for(int i=0;i<n;i++) T[i][i+1]=0;

    for(int s=2;s<n+1;s++)
        for(int i=0;i<n-s+1;i++){
            j=i+s;
            for(int k=i+1;k<j;k++)
               { T[i][j]=min(T[i][j],T[i][k]+T[k][j]+m[i]*m[j]*m[k]);
                 if(T[i][j]==T[i][k]+T[k][j]+m[i]*m[j]*m[k]) 
                 s[i][j]=k;
               }
        }
    return T[0][n];
}
//then multiply all diagonals from s=2 to n and sum them up