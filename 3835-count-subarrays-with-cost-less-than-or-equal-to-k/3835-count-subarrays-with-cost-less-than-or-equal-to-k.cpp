class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int i=0,j=0;
        int ma=nums[0],mi=nums[0];
        long long ans=0;
        map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
            while(!mp.empty() && (1LL*(j-i+1)*((mp.rbegin()->first)-(mp.begin()->first)))>k){
                mp[nums[i]]--;
                if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                }
                i++;
            }
            if(!mp.empty() && (1LL*(j-i+1)*((mp.rbegin()->first)-(mp.begin()->first)))<=k){
                int l=(j-i+1);
                ans+=l;
            }
            j++;
        }
        return ans;
    }
};