/* w=array of weight of each item
   v=array of value of each item
   W=capacity of bag
   n=number of items to choose from */

/* Recursive algorithm 

BASIC IDEA
0<=u<=W and 0<=i<=n
value(u,i) is the maximum value achievable using a knapsack of weight u and the first i items. 
value(u,0) = 0 and value(0,i) = 0//base case
Either use (i-1)th item or not
value(u,i) = max { value(u-w[i],i-1) + v[i-1] , value(u,i-1)} */


unordered_map<pair<int,int>,int,boost::hash<pair<int,int>>> T;
int knapsack(w,v,u,n,i)
{
    pair<int,int> p1=make_pair(u,i);
    if(T.find(p1)!=T.end())
    {   if(i==0)
        T[p1]=0;
        else
        {
            T[p1]=knapsack(w,v,u,n,u,i-1);
            if(u>=w[i-1])
            {
                T[p1]=max(T[p1],knapsack(w,v,u-w[i],n,u,i-1)+v[i-1]);
            }
        }
    }
    return T[p1];
}
//initially u=W=capacity and i=n;

/*Iterative algorithm
Capacity is the the capacity of the bag 

IDEA : Store results for all capacities of the bag from 1 to capacity */
/*Complexity:
  Time:O(n*capacity)
  Space:O(n*capacity)
*/
int T[capacity+1][n+1]={0};
int knapsack(w,v,capacity,n,i)
{
   for(int i=0;i<n+1;i++)
    T[0][i]=0;
   for(int u=0;u<capacity+1;u++)
    T[u][0]=0;

   for(int i=1;i<n+1;i++)
   for(int u=1;u<capacity+1;u++) 
    {   T[u][i]=T[u][i-1];
        if(w[i]<=u)
            T[u][i]=max(T[u][i-1],T[u-w[i-1]][i-1]+v[i-1]);
    }
    return T[capacity][n];
}
/*Optimized solution with Space complexity: O(2*capacity)*/
int T[capacity+1][2]={0};
int knapsack(w,v,capacity,n,i)
{
   for(int i=0;i<2;i++)
    T[0][i]=0;
   for(int u=0;u<capacity+1;u++)
    T[u][0]=0;

   for(int i=1;i<n+1;i++)
   for(int u=1;u<capacity+1;u++) 
    {   T[u][1]=T[u][0];
        if(w[i]<=u)
            T[u][1]=max(T[u][0],T[u-w[i-1]][0]+v[i-1]);
    }
    return T[capacity][1];
}

/*Check boost here:
https://stackoverflow.com/questions/32685540/why-cant-i-compile-an-unordered-map-with-a-pair-as-key
https://www.boost.org/doc/libs/1_75_0/doc/html/hash/combine.html*/