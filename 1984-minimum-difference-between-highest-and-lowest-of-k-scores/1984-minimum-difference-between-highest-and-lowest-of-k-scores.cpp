class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m=INT_MAX;
        if(n==1) return 0;
        for(int i=0;i<n;i++){
            int j=i+(k-1);
            if(j<n){
                m=min(m,nums[j]-nums[i]);
            }
        }
        return m;
    }
};