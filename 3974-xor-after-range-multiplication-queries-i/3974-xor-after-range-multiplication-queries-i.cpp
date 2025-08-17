long long mod=1e9+7;
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size(),m=nums.size();
        for(int i=0;i<n;i++){
            vector<int>v=queries[i];
            int idx=v[0];
            while(idx<=v[1]){
                nums[idx]=(1LL*nums[idx]*v[3])%mod;
                idx+=v[2];
            }
        }
        int x=nums[0];
        for(int i=1;i<m;i++){
            x^=nums[i];
        }
        return x;
        
    }
};