/*Runtime: Better than 100% of solutions submitted and 
  Space:Your memory usage beats 57.99 % of cpp submissions*/
class Solution {
    class vowel{
        public:
        int a,e,i,o,u,sum_entire=0;
        void calc()
        {
            sum_entire=a+e+i+o+u;
        }
    };
public:
    int countVowelStrings(int n) {
        vowel sum[n];
        sum[0].a=sum[0].e=sum[0].i=sum[0].o=sum[0].u=1;
        sum[0].calc();
        for(int i=1;i<n;i++)
        {
            sum[i].a=sum[i-1].sum_entire;
            sum[i].e=sum[i].a-sum[i-1].a;
            sum[i].i=sum[i].e-sum[i-1].e;
            sum[i].o=sum[i].i-sum[i-1].i;
            sum[i].u=sum[i].o-sum[i-1].o;
            sum[i].calc();
        }
    
    return sum[n-1].sum_entire;
    }
};