class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        unordered_map<int,int>mp;
        unordered_map<int,vector<int>>mp1;
        for(auto &x:nums){
            mp[x]++;
        }
        for(auto &x:mp){
            mp1[x.second].push_back(x.first);
        }
        for(auto &x:mp1){
            sort(x.second.begin(),x.second.end());
        }
        vector<int>v,ans;
        for(auto &x:mp1){
            v.push_back(x.second[0]);
        }
        sort(v.begin(),v.end());
        if(v.size()<2){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(v[0]);
            ans.push_back(v[1]);
        }
        return ans;
    }
};