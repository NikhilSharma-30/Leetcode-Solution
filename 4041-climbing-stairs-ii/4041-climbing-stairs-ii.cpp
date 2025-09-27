class Solution {
public:
    int climbStairs(int n, vector<int>& cost) {
        int s=cost.size();
        vector<int>dp(n+1,0);
        dp[0]=0;
        dp[1]=cost[0]+1;
        if(n==1) return dp[1];
        dp[2]=min(cost[1]+4,cost[0]+cost[1]+2);
        if(n==2) return dp[2];
        for(int i=3;i<=n;i++){
            dp[i]=cost[i-1]+min(min(dp[i-1]+1,dp[i-2]+4),dp[i-3]+9);
        }
        return dp[n];  
    }
};