class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]].push_back(i);
            }
            else{
                vector<int>v1=mp[nums[i]];
                int p=v1.back();
                if((i-p)<=k) return true;
                mp[nums[i]].push_back(i);
            }
        }
        return false;
        
    }
};