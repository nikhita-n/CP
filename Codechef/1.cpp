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
	    cout<<0;
	    else if(N%2)
	    cout<<-1;
	    else
	    {  int j=0;
	        while(j<N-1 && c0!=c1)
	        {
	            if(s[j+1]!=s[j])
	            {
	                if(c0>c1){
	                if(s[j]=='0')
	                 {   s[j]='1';
	       
	                c0--;c1++;
	                     cnt++;
	                 }
	                 }
	                else
	                {
	                    if(s[j]=='1')
	                   { s[j]='0';
	              
	                c1--;c0++;
	                       cnt++;
	                   }
	                }
	                
	            }
	            j++;
	            
	        }
	        if(c0!=c1) cout<<-1;
	        else cout<<cnt;
	    }
	    cout<<"\n";
	}
	return 0;
}
