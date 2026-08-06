#define ll long long
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        ll gc=LLONG_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j!=i){
                    ll g=gcd(nums[i],nums[j]);
                    gc=max(gc,(nums[i]/g)*(nums[j]/g));
                }
            }

        }
        return gc;
        
    }
};