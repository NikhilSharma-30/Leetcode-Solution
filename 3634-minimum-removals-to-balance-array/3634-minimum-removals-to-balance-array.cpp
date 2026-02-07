class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        int ans=n-1;
        while(j<n){
            while(nums[j]>(1LL*k*nums[i])){
                i++;
            }
            ans=min(ans,n-(j-i+1));
            j++;
        }
        return ans;
        
    }
};