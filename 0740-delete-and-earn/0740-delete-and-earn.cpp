class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        for(auto &x:mp){
            v.push_back(x.first);
        }
        sort(v.begin(),v.end());
        int n1=v.size();
        vector<int>dp(n1,0);
        dp[0]=v[0]*mp[v[0]];
        if(n1>=2){
            if((v[1]-v[0])==1){
                dp[1]=max(dp[0],v[1]*mp[v[1]]);
            }
            else{
                dp[1]=dp[0]+v[1]*mp[v[1]];
            }
        }
        for(int i=2;i<n1;i++){
            if((v[i]-v[i-1])==1){
                dp[i]=max(dp[i-2]+v[i]*mp[v[i]],dp[i-1]);
            }
            else{
                dp[i]=dp[i-1]+v[i]*mp[v[i]];
            }
        }
        return dp[n1-1];
    }
};