class Solution {
public:
    int rev(int n){
        int r=0;
        while(n>0){
            r=r*10+(n%10);
            n/=10;
        }
        return r;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int m=INT_MAX;
        for(int i=0;i<n;i++){
            int r=rev(nums[i]);
            if(mp.find(nums[i])!=mp.end()){
                m=min(m,i-mp[nums[i]]);
            }
            else{
                mp[r]=i;
            }
        }
        if(m==INT_MAX) return -1;
        return m;

        
    }
};