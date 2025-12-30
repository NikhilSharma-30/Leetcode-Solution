class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>ans;
        map<int,vector<int>>mp;
        vector<int>v=arr;
        for(int i=0;i<n;i++){
            v[i]=abs(x-v[i]);
        }
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(arr[i]);
        }
        for(auto &x:mp){
            if(ans.size()==k) break;
            vector<int>v1=x.second;
            int n1=v1.size();
            for(int i=0;i<n1;i++){
                ans.push_back(v1[i]);
                if(ans.size()==k) break;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};