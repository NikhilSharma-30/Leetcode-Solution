#define ll long long
class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n=s.size();
        ll sum=0;
        unordered_map<char,ll>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]+=cost[i];
        }
        vector<ll>v;
        for(auto &x:mp){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<(v.size()-1);i++){
            sum+=v[i];
        }
        return sum;
    }
};