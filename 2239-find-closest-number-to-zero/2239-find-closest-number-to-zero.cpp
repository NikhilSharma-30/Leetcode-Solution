class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();
        long long z=INT_MIN,y=INT_MAX;
        for(auto &x:nums){
            if(x==0) return 0;
            if(x<0) z=max(z,1LL*x);
            if(x>0) y=min(y,1LL*x);
        }
        long long d1=abs(z),d2=abs(y);
        if(d1<d2) return z;
        return y;

        
    }
};