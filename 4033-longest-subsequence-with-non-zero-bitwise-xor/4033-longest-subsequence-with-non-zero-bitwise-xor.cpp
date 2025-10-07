class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        if(n==1){
            if(nums[0]==0) return 0;
            return 1;
        }
        int xo=nums[0];
        if(nums[0]==0) c++;
        for(int i=1;i<n;i++){
            if(nums[i]==0) c++;
            xo^=nums[i];
        }
        if(c==n) return 0;
        if(xo==0) return (n-1);
        return n;
        
    }
};