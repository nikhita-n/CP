#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(n) for(int i=0;i<n;i++)

int main() {
	int T;
	string s;
	ll N,c1=0,c0=0;
	scanf("%d",&T);
	while(T--)
	{
	    c1=0;c0=0;int cnt=0;
	    cin>>s;
	    N=s.length();
	    rep(N){
	        if(s[i]=='0')
	        c0++;
	        else
	        c1++;
	    }
	    if(c1==c0)
	    cnt=0;
	    else if(N%2)
	    cnt=-1;
	    else
	    {  int j=0;
	       if(c0!=0 && c1!=0)
	       {
	           cnt=abs(c0-c1)/2;
	       }
	       else cnt=-1;
	    }
	    cout<<cnt;
	    cout<<"\n";
	}
	return 0;
}
