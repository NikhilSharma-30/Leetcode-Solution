class Solution {
public:
    string trimTrailingVowels(string s) {
        int n=s.size();
        set<char>st;
        string vow="aeiou";
        for(auto &x:vow){
            st.insert(x);
        }
        string ans="";
        int i=n-1;
        for(i=n-1;i>=0;i--){
            if(st.find(s[i])==st.end()){
                break;
            }
        }
        return s.substr(0,i+1);
    }
};