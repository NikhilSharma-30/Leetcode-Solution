#define ll long long
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        ll ans=0;
        for(int i=0;i<n;i++){
            int ma=INT_MIN,mi=INT_MAX;
            for(int j=i;j<n;j++){
                ma=max(ma,nums[j]);
                mi=min(mi,nums[j]);
                ans+=(ma-mi);
            }
        }
        return ans;
        
    }
};