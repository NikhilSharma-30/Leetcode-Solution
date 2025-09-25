class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        if(m==1) return triangle[0][0];
        if(m==2) return triangle[0][0]+min(triangle[1][0],triangle[1][1]);
        vector<vector<int>>dp=triangle;
        for(int i=0;i<m;i++){
            for(int j=0;j<=i;j++){
                dp[i][j]=0;
            }
        }
        dp[0][0]=triangle[0][0];
        for(int i=1;i<m;i++){
            dp[i][0]=dp[i-1][0]+triangle[i][0];
        }
        for(int i=1;i<m;i++){
            dp[i][i]=dp[i-1][i-1]+triangle[i][i];
        }
        for(int i=2;i<m;i++){
            for(int j=1;j<i;j++){
                dp[i][j]=triangle[i][j]+min(dp[i-1][j],dp[i-1][j-1]);
            }
        }
        int ans=dp[m-1][0];
        for(int j=0;j<m;j++){
            ans=min(ans,dp[m-1][j]);
        }
        return ans;


        
    }
};