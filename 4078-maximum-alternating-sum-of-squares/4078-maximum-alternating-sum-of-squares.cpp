class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long ans=0;
        vector<int>v=nums;
        for(int i=0;i<n;i++){
            v[i]=abs(v[i]);
        }
        sort(v.begin(),v.end(),greater<int>());
        int e=0,o=0;
        if(n%2==0){
            e=n/2;
            o=n/2;
        }
        else{
            e=(n+1)/2;
            o=n/2;
        }
        for(int i=0;i<e;i++){
            ans+=(v[i]*v[i]);
        }
        for(int i=e;i<n;i++){
            ans-=(v[i]*v[i]);
        }
        return ans;

        
        
    }
};