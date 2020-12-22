#include<bits/stdc++.h>
using namespace std;
#define MAXIM 1000000007
#define rep(n) for(int i=0;i<n;i++)
#define ll long long

int main()
{
    int t;
    ll n,i=0;
    cin>>t;
    string s,a;
    while(t--){
        cin>>n;
        cin>>s;
        //n=s.length();
        i=n-1;
        while(i--)
        {
            if(s[i]!=')') break;
        }
        if((n-i-1) > (i+1)) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";

    }
    return 0;
}