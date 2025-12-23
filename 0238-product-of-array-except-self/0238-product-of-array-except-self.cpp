#define ll long long 
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>vp(n,1),vs(n,1);
        vector<int>ans;
        int x=1;
        for(int i=0;i<n;i++){
            x*=nums[i];
            vp[i]=x;
        }
        x=1;
        for(int i=n-1;i>=0;i--){
            x*=nums[i];
            vs[i]=x;
        }
        for(int i=0;i<n;i++){
            int p1=i-1,p2=i+1;
            int x1=1,x2=1;
            if(p1>=0){
                x1=vp[p1];
            }
            if(p2<n){
                x2=vs[p2];
            }
            ans.push_back(x1*x2);
        }
        return ans;

        
    }
};