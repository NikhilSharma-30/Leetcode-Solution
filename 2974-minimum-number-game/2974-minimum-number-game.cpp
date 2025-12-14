class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=1;
        while(i<n){
            ans.push_back(nums[i]);
            ans.push_back(nums[i-1]);
            i+=2;
        }
        return ans;
        
    }
};