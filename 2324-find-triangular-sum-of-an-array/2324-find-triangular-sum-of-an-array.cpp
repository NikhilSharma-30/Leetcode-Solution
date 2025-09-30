class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        if(n==1) return nums[0];
        while(n>1){
            vector<int>newn(n-1);
            for(int i=0;i<(n-1);i++){
                newn[i]=(nums[i]+nums[i+1])%10;
            }
            nums=newn;
            n--;
            if(n==1){
                ans=newn[0];
            }     
        }
        return ans;
    }
};