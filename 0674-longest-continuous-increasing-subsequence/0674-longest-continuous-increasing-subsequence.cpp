class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size(),c=1,l=1;
        int i=0,j=1;
        while(j<n){
            if(nums[j-1]>=nums[j]){
                l=max(l,j-i);
                i=j;
            }
            j++;
        }
        l=max(l,j-i);
        return l;
    }
};