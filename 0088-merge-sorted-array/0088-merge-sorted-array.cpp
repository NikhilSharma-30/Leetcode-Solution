class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        map<int,int>mp;
        for(auto &x:nums1){
            if(j<m){
                mp[x]++;
                j++;
            }
        }
        for(auto &x:nums2){
            mp[x]++;
        }
        for(auto &x:mp){
            int val=x.first;
            for(int j=0;j<x.second;j++){
                if(i<(m+n)){
                    nums1[i]=val;
                }
                i++;

            }
        }

    }
};