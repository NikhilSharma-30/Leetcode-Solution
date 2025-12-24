class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        vector<int>v1,v2;
        vector<vector<int>>ans;
        map<int,int>mp;
        set<int>st;
        for(auto &x:matches){
            st.insert(x[0]);
            st.insert(x[1]);
        }
        for(auto &x:matches){
            mp[x[1]]++;
        }
        for(auto &x:mp){
            if(x.second==1){
                v2.push_back(x.first);
            }
        }
        for(auto &x:st){
            if(mp.find(x)==mp.end()){
                v1.push_back(x);
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);
        return ans;
        
    }
};