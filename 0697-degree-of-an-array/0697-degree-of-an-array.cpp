class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp1;
        unordered_map<int,vector<int>>mp;
        for(auto &i:nums){
            mp1[i]++;
        }
        int m=INT_MIN;
        for(auto &x:mp1){
            m=max(m,x.second);
        }
        for(int i=0;i<n;i++){
            mp[nums[i]].push_back(i);
        }
        int mi=INT_MAX;
        for(auto &x:mp1){
            if(x.second==m){
                vector<int>v=mp[x.first];
                int n1=v.size();
                mi=min(mi,1*(v[n1-1]-v[0])+1);
            }
        }
        return mi;
    }
};