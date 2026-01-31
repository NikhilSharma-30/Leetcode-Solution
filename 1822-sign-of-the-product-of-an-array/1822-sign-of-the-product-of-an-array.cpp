class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        bool f=false;
        int cn=0;
        for(auto &x:nums){
            if(x==0){
                f=true;
            }
            else if(x<0){
                cn++;
            }
        }
        if(f) return 0;
        if(cn%2==1) return -1;
        return 1;
        
    }
};