class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        bool f=false;
        for(int i=n-1;i>=2;i--){
            int s=nums[i-1]+nums[i-2];
            if(s>nums[i]){
                int p=nums[i]+nums[i-1]+nums[i-2];
                return p;
            }

        }
        return 0;
        
    }
};