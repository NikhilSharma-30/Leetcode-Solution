class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        if(n%k!=0) return false;
        int c=n/k;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto &x:mp){
            if(x.second>c) return false;
        }
        return true;
    }
};