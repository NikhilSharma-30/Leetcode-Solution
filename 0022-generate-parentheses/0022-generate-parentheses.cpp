class Solution {
public:
    void solve(vector<string>&ans,string s,int n,int co,int cc){
        if(s.size()>(2*n)){
            return;
        }
        if(s.size()==(2*n)){
            ans.push_back(s);
            return;
        }
        if(co<n){
            s.push_back('(');
            solve(ans,s,n,co+1,cc);
            s.pop_back();
        }
        if(cc<co){
            s.push_back(')');
            solve(ans,s,n,co,cc+1);
            s.pop_back();
        }
        return;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        solve(ans,s,n,0,0);
        return ans;
        
    }
};