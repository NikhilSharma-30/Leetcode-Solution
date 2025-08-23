class Solution {
public:
    bool isValid(string s) {
        int n=s.size(),c=0;
        if(n==1) return false;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            bool f=false;
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                f=true;
                st.push(s[i]);
            }
            else if(!st.empty()){
               if(s[i]==')' && st.top()=='('){
                    f=true;
                    st.pop();
               }
               if(s[i]=='}' && st.top()=='{'){
                    f=true;
                    st.pop(); 
               }
               if(s[i]==']' && st.top()=='['){
                    f=true;
                    st.pop();
               }
            }
            if(!f) return false;
        }
        if(st.empty()) return true;
        return false;
        
    }
};