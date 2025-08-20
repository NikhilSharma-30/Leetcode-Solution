class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        if(n==1 && m==1) return matrix[0][0]-'0';
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                int r=i-1,c=j-1;
                if(r>=0 && r<n && c>=0 && c<m && matrix[i][j]=='1'){
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
            }
        }
        int ma=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ma=max(ma,dp[i][j]);
            }
        }
        return ma*ma;
        
    }
};