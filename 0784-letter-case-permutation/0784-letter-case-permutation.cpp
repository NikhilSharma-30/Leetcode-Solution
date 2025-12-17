class Solution {
public:
    void solve(int i,string &s1,string &s,vector<string>&v){
        int n=s.size();
        if(i==n){
            v.push_back(s1);
            return;
        }
        if(isalpha(s[i])){
            s1.push_back(tolower(s[i]));
            solve(i+1,s1,s,v);
            s1.pop_back();
            s1.push_back(toupper(s[i]));
            solve(i+1,s1,s,v);
            s1.pop_back();
        }
        else{
            s1.push_back(s[i]);
            solve(i+1,s1,s,v);
            s1.pop_back();
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        string s1="";
        int i=0;
        vector<string>v;
        solve(0,s1,s,v);
        return v;
    }
};