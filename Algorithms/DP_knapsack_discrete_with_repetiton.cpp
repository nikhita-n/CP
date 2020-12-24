/* w=array of weight of each item
   v=array of value of each item
   u=capacity of bag
   w_length=number of items to choose from */

/* Recursive algorithm 

BASIC IDEA

value(0) = 0 //base case
value(u) = max { value[u] ,value(u- w[i])+v[i]} */


unordered_map<int,int> T;
int knapsack(w,v,u,w_length)
{
    if(T.find(u)!=T.end())
    T[u]=0;

    for(int i=0;i<w_length;i++)
        if(w[i]<=u)
            T[u]=max(T[u],knapsack(w,v,u-w[i],w_length)+v[i]);
    return T[u];
}

/*Iterative algorithm
Capacity is the the capacity of the bag 

IDEA : Store results for all capacities of the bag from 1 to capacity */

int T[u+1]={0};
int knapsack(w,v,capacity,w_length)
{
   for(int u=1;u<capacity+1;u++) 
    for(int i=0;i<w_length;i++)
        if(w[i]<=u)
            T[u]=max(T[u],T[u-w[i]]+v[i]);

    return T[capacity];
}