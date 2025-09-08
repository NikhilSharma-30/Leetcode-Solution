class Solution {
public:
    int dp[501][501][2];
    int mod=1e9+7;
    int solve(vector<vector<int>>& grid,int r,int c,int d){
        int m=grid.size(),n=grid[0].size();
        if(r<0 || r>=m || c<0 || c>=n) return 0;
        if(r==(m-1) && c==(n-1)) return 1;
        if(dp[r][c][d]!=-1) return dp[r][c][d];
        long ways=0;
        if(grid[r][c]==1){
            if(d==0){
                ways=solve(grid,r,c+1,1);
            }
            else{
                ways=solve(grid,r+1,c,0);
            }
        }
        else{
            ways+=solve(grid,r+1,c,0);
            ways+=solve(grid,r,c+1,1);
        }
        return dp[r][c][d]=((int)ways)%mod;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0,0);  
    }
};