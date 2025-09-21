class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return 1LL*k*(nums[n-1]-nums[0]);
    }
};