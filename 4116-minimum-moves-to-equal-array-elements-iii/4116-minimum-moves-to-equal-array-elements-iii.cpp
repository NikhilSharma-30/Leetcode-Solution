class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int ma=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            ans+=(ma-nums[i]);
        }
        return ans;
    }
};