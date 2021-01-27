#include<bits/stdc++.h>
using namespace std;
#define MAXIM 1000000007    //10^9+7
#define rep(n) for(int i=0;i<n;i++)
#define repi(j,n) for(int j=0;j<n;j++)
#define ll long long
template<typename T> void Print(T value) { cout<<value<<endl; }
template<typename T> T MAX_NUM(){ return numeric_limits<T>::max();}

int spiralBinary(int *a,int n){
    int loc[2*n-1][2]={0};
    
    loc[0][0]=loc[1][0]=n;
    repi(1,n)
    {
        loc[0][i]=
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    /*cout<<"MATRIX";
    rep(n)
        repi(j,n)
            cin>>a[i][j];*/
    int arr[][n]= { { 1, 2, 3, 4 }, 
                    { 12, 13, 14, 5 }, 
                    { 11, 16, 15, 6 }, 
                    { 10, 9, 8, 7 } }; 
  
    cout<<spiralBinary(arr,n); 
  
    return 0; 
}