class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size(),m=0;
        sort(nums.begin(),nums.end());
        if(n<2) return 0;
        for(int i=1;i<n;i++){
            m=max(m,nums[i]-nums[i-1]);
        }
        return m;
        
    }
};