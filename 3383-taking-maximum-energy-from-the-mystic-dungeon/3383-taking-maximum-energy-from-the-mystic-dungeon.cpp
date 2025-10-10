class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n=energy.size();
        int ma=INT_MIN;
        int id=n-k;
        vector<int>dp(n,0);
        for(int i=n-1;i>=0;i--){
            int x=i+k;
            if(x>=0 && x<n){
                dp[i]=dp[x]+energy[i];
            }
            else{
                dp[i]=energy[i];
            }
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};