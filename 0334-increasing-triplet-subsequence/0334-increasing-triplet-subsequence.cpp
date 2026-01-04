class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        int mi=INT_MAX,ma=INT_MIN;
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            mi=min(mi,nums[i]);
            v1.push_back(mi);
        }
        for(int i=n-1;i>=0;i--){
            ma=max(ma,nums[i]);
            v2.push_back(ma);
        }
        reverse(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            int val=nums[i];
            int m1=v1[i],m2=v2[i];
            if(val>m1 && val<m2) return true;
        }
        return false;
    }
};