#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(n) for(int i=0;i<n;i++)

int main() {
	int N,T,p,c=0;
	string s;
	scanf("%d",&T);
	while(T--)
	{   c=0;
	    cin>>N;
	    cin>>s;
	    //l=s.lenght();
	    rep(N)
	    {
	        if(s[i]=='1')
	        c++;
	    }
	   if((120-N+c)>=90) cout<<"YES";
	   else cout<<"NO";
	    cout<<"\n";
	}
	return 0;
}