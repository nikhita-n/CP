#include<bits/stdc++.h>
using namespace std;
int main()
{
    string *check[5];
    check=new string[10];
    for(int i=0;i<10;i++)
        check[i]=i;
    for(int i=0;i<10;i++)
        cout<<check[i]<<" ";
    return 0;

}