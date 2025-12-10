class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans,v;
        v=nums;
        sort(v.begin(),v.end());
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++){
            auto it=lower_bound(v.begin(),v.end(),v[i]);
            int id=it-v.begin();
            mp[v[i]]=id;
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(mp[nums[i]]);
        }
        return ans;
        
    }
};