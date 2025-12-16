class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(st.size()==1 && s[i]==')'){
                st.pop();
            }
            if(st.size()>=1) ans+=s[i];
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(!st.empty()){
                st.pop();
            }
        }
        return ans;

        
    }
};