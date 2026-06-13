class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        auto it=max_element(nums.begin(),nums.end());
        int id=it-nums.begin();
        int el=nums[id];
        for(auto &x:nums){
            if(x!=el && el<(2*x)) return -1;
        }
        return id;    
    }
};