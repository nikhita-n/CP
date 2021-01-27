#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        const int N=s.length();
        bool T[(const int)N][(const int) N];
        int max=1,init=0;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
             {   if(i==j || j<i)
                    T[i][j]=true;
                else 
                 T[i][j]= false;
             }
        
        for(int i=N-3;i>=0;i--)
            for(int j=i+1;j<N;j++)    
                if(T[i+1][j-1] == true && s[i]==s[j])
                {
                    T[i][j]=true;
                    if(j-i+1 > max)
                    {  max=j-i+1;
                       init=i;
                    }            
                }
        return s.substr(init,max);
    }
};
int main(){
    Solution AB;
    cout<<AB.longestPalindrome("cbbd");
    return 0;   
}
/*IMPROVE:
    Runtime: 188 ms, faster than 40.23% of C++ online submissions for Longest Palindromic Substring.
    Memory Usage: 8.2 MB, less than 67.02% of C++ online submissions for Longest Palindromic Substring.
    */
