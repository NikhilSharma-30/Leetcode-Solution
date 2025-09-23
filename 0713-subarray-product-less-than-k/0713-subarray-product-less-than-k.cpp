class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0,c=0;
        long long p=1;
        if(k<=1) return 0;
        while(j<n){
            p=1LL*p*nums[j];
            while(i<n && p>=k){
                p=p/(1LL*nums[i]);
                i++;
            }
            if(p<k) c+=(j-i+1);
            j++;
        }
        return c;
    }
};