/*Runtime: 76 ms, faster than 88.60% of C++ online submissions for Find Valid Matrix Given Row and Column Sums.
Memory Usage: 33.7 MB, less than 73.62% of C++ online submissions for Find Valid Matrix Given Row and Column Sums.*/
//O((r+c)logr + (r+c)logc) - solution, space O(r+c)
class Solution {
    class rorc{
        public:
        int sum,index;
    };
    struct compareTo{
    bool operator() (const rorc &a, const rorc &b)
    {
        return a.sum>b.sum;
    }};
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int max=(rowSum.size())*(colSum.size());
        vector<vector<int>> ans(rowSum.size(),vector<int>(colSum.size(),0));
        rorc r_min,c_min,temp;
        priority_queue<rorc,vector<rorc>,compareTo> row,col;
        
        for(int i=0;i<rowSum.size();i++){
            temp.sum=rowSum[i];
            temp.index=i;
            row.push(temp);
        }
        for(int i=0;i<colSum.size();i++){
            temp.sum=colSum[i];
            temp.index=i;
            col.push(temp);
        }
       
        while(!(row.empty() || col.empty()))
        {
            r_min=row.top();
            c_min=col.top();
            row.pop();
            col.pop();
            if(r_min.sum<c_min.sum)
            {  
                ans[r_min.index][c_min.index]=r_min.sum;
                c_min.sum-=r_min.sum;
                col.push(c_min);
            }
            else 
            {   
                ans[r_min.index][c_min.index]=c_min.sum;
                r_min.sum-=c_min.sum;
                row.push(r_min);
            }
          
        }
        return ans;
    }
};