class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int s=nums.size();
        unordered_map<int,int>mp;
        for(auto &i:nums){
            mp[i]++;
        }
        for(auto &x:mp){
            int v=x.first,f=x.second;
            if((2*f)==s) return v;
        }
        return 0;
    }
};