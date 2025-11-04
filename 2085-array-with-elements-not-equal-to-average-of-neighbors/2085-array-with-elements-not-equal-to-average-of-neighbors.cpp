class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int i=0,j=n-1;
        sort(nums.begin(),nums.end());
        while(i<=j){
            if(nums[i]==nums[j]){
                ans.push_back(nums[i]);
                break;
            }
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j--;
        }
        return ans;
        
    }
};