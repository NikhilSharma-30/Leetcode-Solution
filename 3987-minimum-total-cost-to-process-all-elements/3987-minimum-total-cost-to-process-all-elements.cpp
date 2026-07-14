# define ll long long
class Solution {
public:
    ll m=1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        int n=nums.size();
        ll s=accumulate(nums.begin(),nums.end(),0LL);
        ll c=0;
        if(s<=k) return c;
        s-=k;
        ll d=s/k;
        if((s%k)==0){
            c=d;
        }
        else{
            c=d+1;
        }
        ll ans=0;
        if(c%2==0){
            ans=((c/2)%m)*((c+1)%m);
        }
        else{
            ans=(((c+1)/2)%m)*(c%m);
        }
        return ans%m;

        
    }
};