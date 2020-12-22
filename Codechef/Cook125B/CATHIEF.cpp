#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(n) for(int i=0;i<n;i++)

int main() {
	int T;
	ll k,x,y,N,mid;
	scanf("%d",&T);
	while(T--)
	{
	    cin>>x>>y>>k>>N;
	     mid=(double)(x+y)/2;
	        if((abs(mid-x)%k==0) && (abs(mid-y)%k==0) && (mid-x)!=0 && (mid-y)!=0 && (abs(mid-x))==(abs(mid-y))) 
	         cout<<"Yes";
	    else cout<<"No";
	    cout<<endl;
	}
	return 0;
}
