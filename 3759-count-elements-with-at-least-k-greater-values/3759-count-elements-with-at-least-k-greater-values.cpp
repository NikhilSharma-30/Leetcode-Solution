class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size(),c=0;
        unordered_map<int,int>mp;
        vector<int>v;
        for(auto &i:nums){
            mp[i]++;
        }
        for(auto &x:mp){
            v.push_back(x.first);
        }
        int n1=v.size();
        sort(v.begin(),v.end());
        vector<int>v1;
        int s=0;
        for(auto &x:v){
            s+=mp[x];
            v1.push_back(s);
        }
        for(int i=0;i<n1;i++){
            int x=n-v1[i];
            if(x>=k) c+=mp[v[i]];
        }
        return c; 
    }
};