#define ll long long
class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        ll p=1;
        vector<int>v;
        bool f=false,f1=false,f2=false;;
        for(auto &x:nums){
            if(x<0){
                v.push_back(x);
                f2=true;
            }
            else if(x==0){
                f=true;
            }
            else{
                p*=x;
                f1=true;
            }
        }
        int n1=v.size();
        if(f && !f1 && !f2) return 0;
        if(n>=2 && n1==1){
            if(f){
                if(!f1){
                    return 0;
                }
                else{
                    return p;
                }
            }
            else{
                return p;
            }
        }
        if(n1%2==0){
            for(int i=0;i<n1;i++){
                p*=v[i];
            }
        }
        else{
            sort(v.begin(),v.end());
            for(int i=0;i<(n1-1);i++){
                p*=v[i];
            }
        }
        return p;
    }
};