class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int>ans;
        unordered_map<int,int>mp,mp1;
        for(auto &x:nums1){
            mp[x]++;
        }
        for(auto &x:nums2){
            mp1[x]++;
        }
        for(auto &x:mp){
            int v=x.first,f=x.second;
            if(mp1.find(v)!=mp1.end()){
                int m=min(f,mp1[v]);
                for(int i=0;i<m;i++){
                    ans.push_back(v);
                }
            }
        }
        return ans;
    }
};