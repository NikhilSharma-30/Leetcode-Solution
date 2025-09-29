class Solution {
public:
    int dp[51][51];
    int solve(vector<int>& values,int i,int j){
        int mi=INT_MAX;
        if((j-i+1)<=2) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i+1;k<j;k++){
            int w=solve(values,i,k)+values[i]*values[k]*values[j]+solve(values,k,j);
            mi=min(mi,w);
        }
        return dp[i][j]=mi;
    }
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        memset(dp,-1,sizeof(dp));
        return solve(values,0,n-1);  
    }
};