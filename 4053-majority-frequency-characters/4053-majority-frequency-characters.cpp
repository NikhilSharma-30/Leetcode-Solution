class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int>mp;
        unordered_map<int,int>group;
        int m=0,ma=0;
        for(auto &c:s){
            mp[c]++;
        }
        for(auto &x:mp){
            char ch=x.first;
            int f=x.second;
            group[f]++;
        }
        for(auto &x:group){
            m=max(m,x.second);
        }
        for(auto x:group){
            if(x.second==m){
                ma=max(ma,x.first);
            }
        }
        string ans="";
        for(auto &x:mp){
            if(x.second==ma){
                ans+=(x.first);
            }
        }
        return ans;
    }
};