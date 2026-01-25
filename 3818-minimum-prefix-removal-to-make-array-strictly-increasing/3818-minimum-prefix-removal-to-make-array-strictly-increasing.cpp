class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n=nums.size();
        int i=n-1,c=0;
        for(i=n-1;i>=1;i--){
            if(nums[i]<=nums[i-1]){
                break;
            }
            c++;
        }
        c++;
        if(i==0 || i==(n-1)) return i;
        return n-c;
    }
};