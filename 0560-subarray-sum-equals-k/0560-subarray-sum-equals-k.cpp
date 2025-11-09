class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),c=0;
        if(n==1){
            if(nums[0]==k) return 1;
            return 0;
        }
        unordered_map<int,int>mp;
        vector<int>v(n,0);
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            v[i]=s;
        }
        for(auto &x:v){
            if(x==k){
                c++;
            }
            if(mp.find(x-k)!=mp.end()){
                c+=(mp[x-k]);
            }
            mp[x]++;
        }
        return c;    
    }
};