class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n=nums.size();
        int num=0;
        vector<bool>ans(n,false);
        for(int i=0;i<n;i++){
            num=(num*2+nums[i])%5;
            if(num==0){
                ans[i]=true;
            }
        }
        return ans;
        
    }
};