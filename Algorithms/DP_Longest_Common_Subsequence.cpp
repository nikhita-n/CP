/* n is the size of the array */
//recursive
unordered_map<pair<int,int>,int,boost::hash<pair<int,int>>> T;
int Longest_Common_subsequence(vector<int> a,vector<int> b,int i,int j) //i=n_a and b=n_b, initially
{
    pair<int,int> p1=make_pair(i,j);
    if(T.find(p1)==T.end())
    {
      if(i==0 ||j==0)
        T[p1]= 0;
      else{
          if(a[i-1]==b[i-1])
            T[p1]=Longest_Common_subsequence(a,b,i-1,j-1)+1;
          else
            T[p1]=max(Longest_Common_subsequence(a,b,i,j-1),Longest_Common_subsequence(a,b,i-1,j));
          }
    }
   
    return T[p1];
}
//print maximum value in the list
//iterative

int Longest_Common_subsequence(vector<int> a,vector<int> b,int x,int y)
{
  int T[x+1][y+1]={0};
  int max1=0;
  for(int i=0;i<=x;i++)
    for(int j=0;j<=y;j++)
      { 
        if(i!=0 && j!=0)
        {
            if(s1[i-1]==s2[j-1])
              T[i][j]=T[i-1][j-1]+1;
            else
              T[i][j]=max(T[i][j-1],T[i-1][j]);
        }
        max1=max(T[i][j],max1);
      }//max T[i] in the array;
  return max1;
}
