#include<bits/stdc++.h>
using namespace std;
#define MAXIM 1000000007
#define rep(n) for(int i=0;i<n;i++)
#define ll long long
ll lcm2(ll n,ll lcm3){
    
    if(!(n%lcm3)) return n;
            n+=(n%lcm1);
            cout<<n;
}
int main()
{
    int t,p,q,dn;
    ll n,k=0,lcm1;
    set<int> digits;
    cin>>t;
    while(t--){
        int rem[9]={-1};
        cin>>n;
        k=n;
        while(digits.size()<=9)
        {
            if(k%10!=0)
            {
                digits.insert(k%10);
                rem[k%10]=n%(k%10);
            }
            k=k/10;
        }
        k=1;
        lcm1=1;
        dn=digits.size();
        while(k<=dn)
        {   if(digits.find(k))
            { lcm1=boost::math::lcm(k,lcm1); }
            k++;
        }
        
        cout<<"\n";
        
    }
    return 0;
}