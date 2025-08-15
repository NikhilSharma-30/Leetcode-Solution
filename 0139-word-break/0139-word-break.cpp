class Solution {
public:
    void solve(int k,string s,vector<string>& wordDict,bool &f,vector<int>&dp){
        if(k>s.size()) return;
        if(k==(s.size())){
            f=true;
            return;
        }
        int n=wordDict.size();
        if(dp[k]!=-1) return;
        for(int i=0;i<n;i++){
            if(dp[k]==0) return;
            int siz=wordDict[i].size();
            int p=s.size();
            string curr=s.substr(k,min(siz,p-k));
            if(curr!=wordDict[i]) continue;
            solve(k+siz,s,wordDict,f,dp);
        }
        dp[k]=f?1:0;
        return;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
        bool f=false;
        solve(0,s,wordDict,f,dp);
        return f;
    }
};