class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp;
        string ans="";
        int n=s.size();
        for(auto &x:s){
            mp[x]++;
        }
        int m=INT_MIN;
        for(auto &x:mp){
            m=max(m,x.second);
        }
        set<char>st,s1;
        for(auto &x:mp){
            if(m==x.second) st.insert(x.first);
        }
        for(int i=n-1;i>=0;i--){
            if(st.find(s[i])!=st.end() && s1.find(s[i])==s1.end()){
                ans+=s[i];
                s1.insert(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};