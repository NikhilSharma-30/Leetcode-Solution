class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    dp[i][j]=grid[0][0];
                    continue;
                }
                int x=i-1,y=j-1;
                if(x>=0 && x<m && y>=0 && y<n){
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
                }
                else if(x>=0 && x<m){
                    dp[i][j]=grid[i][j]+dp[i-1][j];
                }
                else{
                    dp[i][j]=grid[i][j]+dp[i][j-1];
                }
            }
        }
        return dp[m-1][n-1];
        
    }
};