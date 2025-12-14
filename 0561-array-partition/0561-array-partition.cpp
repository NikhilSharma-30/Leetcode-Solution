class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=0;
        for(int i=0;i<n;i+=2){
            s+=nums[i];
        }
        return s;
    }
};