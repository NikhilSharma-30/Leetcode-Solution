class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            if(nums[0]==0) return 1;
            return 0;
        }
        int c=1;
        long long ans=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==0 && nums[i]==0){
                c++;
            }
            else if(nums[i-1]==0 && nums[i]!=0){
                ans+=((1LL*c*(c+1))/2);
                c=1;
            }
        }
        if(c>1){
            ans+=((1LL*c*(c+1))/2);
        }
        if(nums[n-2]!=0 && nums[n-1]==0) ans++;
        return ans;
    }
};