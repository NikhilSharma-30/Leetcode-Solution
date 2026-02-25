class Solution {
public: 
    int find(int num){
        int c=0;
        for(int i=0;i<32;i++){
            if(num & (1<<i)) c++;
        }
        return c;
    }

    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        map<int,vector<int>>mp;
        sort(arr.begin(),arr.end());
        for(auto &x:arr){
            mp[find(x)].push_back(x);
        }
        for(auto &x:mp){
            vector<int>v=x.second;
            for(int i=0;i<v.size();i++){
                ans.push_back(v[i]);
            }
        }
        return ans;

    }
};