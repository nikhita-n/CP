/*Input strings: A[0...n-1] and B[0...m-1]*/
//Recursive
unordered_map<pair<int,int>,int,boost::hash<pair<int,int>>> T;
int sequence_alignment(int A[],int B[],int i,int j) //initially i=n and j=m, i and j denote the num of characters in the comparison
{
    pair<int,int> p1=make_pair(i,j);
    if(T.find(p1)!=T.end())
    {   if(i==0)
        T[p1]=j;
        else if(j==0)
        T[p1]=i;
        else
        {
            int diff;
            if(A[i-1]!=B[j-1]) diff=1;
            else diff=0;
            T[p1]=min(sequence_alignment(A,B,i-1,j)+1,sequence_alignment(A,B,i,j-1)+1,sequence_alignment(A,B,i-1,j-1)+diff); //what is the best alignment among deletion,insertion ,(mis)match
        }
    }

    return T[p1];
}
int T[n+1][m+1]={MAX}
//iterative
/*Complexity:
Time: O(n*m)
Space:O(n*m)*/
int sequence_alignment(int A[],int B[],int i,int j) //initially i=n and j=m, i and j denote the num of characters in the comparison
{
     for(int i=0;i<n+1;i++)
     T[i][0]=i;
     for(int j=0;j<m+1;j++)
     T[0][j]=j;
     int diff;
     for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
        {
            if(A[i-1]!=B[j-1]) diff=1;
            else diff=0;
            T[i][j]=min(T[i-1][j]+1,T[i][j-1]+1,T[i-1][j-1]+diff);
        }

    return T[n][m];
}
//OPTIMIZED only for cost
//To reduce space complexity to linear, O(min(n,m))
//say n<m
int T[n][2]={MAX}
int sequence_alignment(int A[],int B[],int i,int j) //initially i=n and j=m, i and j denote the num of characters in the comparison
{
     for(int i=0;i<n+1;i++)
     T[i][0]=i;
     for(int j=0;j<2;j++)
     T[0][j]=j;
     int diff;
     for(int i=1;i<n+1;i++)
        for(int j=1;j<m+1;j++)
        {
            if(A[i-1]!=B[j-1]) diff=1;
            else diff=0;
            T[i][1]=min(T[i-1][1]+1,T[i][0]+1,T[i-1][0]+diff);
        }

    return T[n][1];
}