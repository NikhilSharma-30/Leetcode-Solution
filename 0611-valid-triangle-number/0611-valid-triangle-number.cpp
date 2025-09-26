class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) continue;
            for(int j=i+1;j<n;j++){
                int sum=nums[i]+nums[j];
                auto it=lower_bound(nums.begin(),nums.end(),sum);
                int id=it-nums.begin();
                c+=(id-1-j);
            }
        }
        return c;
        
    }
};