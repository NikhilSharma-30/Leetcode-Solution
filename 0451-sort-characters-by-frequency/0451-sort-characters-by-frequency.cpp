class Solution {
public:
    static bool comp(pair<int,char>p1,pair<int,char>p2){
        return p1.first>p2.first;
    }
    string frequencySort(string s) {
        int n=s.size();
        string ans="";
        unordered_map<char,int>mp;
        vector<pair<int,char>>v;
        for(auto &c:s){
            mp[c]++;
        }
        for(auto &x:mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),comp);
        for(auto &x:v){
            int f=x.first;
            char c=x.second;
            for(int i=0;i<f;i++){
                ans+=c;
            }
        }
        return ans;
        
    }
};