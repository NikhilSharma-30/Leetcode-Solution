class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int s1=0,s2=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            s1+=nums[i];
        }
        for(int i=(n-k);i<n;i++){
            s2+=nums[i];
        }
        return abs(s1-s2);
        
    }
};