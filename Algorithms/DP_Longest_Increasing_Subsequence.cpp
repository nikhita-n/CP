/* n is the size of the array */
//recursive
unordered_map<int,int> T;
int Longest_Increasing_subsequence(vector<int> m,int n)
{
    if(T.find(n)==T.end())
        T[n]=1;
    
    for(int i=0;i<n;i++)
        if(m[i]<m[n])
            T[i]=max(T[i],Longest_Increasing_subsequence(m,i)+1);
    
    return T[n];
}
//print maximum value in the list
//iterative
int T[n]={1};
int Longest_Increasing_subsequence(vector<int> m,int n)
{
  for(int j=0;j<n;j++)
    for(int i=0;i<j;i++)
        if(m[i]<m[j])
            T[j]=max(T[j],T[i]+1);
    
   return //max T[i] in the array;
}

//construction of solution, we have an array called prev[i] storing previous indices
int T[n]={1};
int prev[n]={0};
int Longest_Increasing_subsequence(vector<int> m,int n)
{
  for(int j=0;j<n;j++)
    for(int i=0;i<j;i++)
        if(m[i]<m[j] && T[j]<T[i])
           { T[j]=T[i]+1;
             prev[j]=i;
           }
    
   return //max T[i] in the array;
}
find index for which T[index] is max and print m[prev[index--]] in a loop
