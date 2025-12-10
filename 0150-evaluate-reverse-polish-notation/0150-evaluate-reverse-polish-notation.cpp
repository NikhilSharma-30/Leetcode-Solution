class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>st;
        for(auto &s:tokens){
            if((s=="+" || s=="-" || s=="*" || s=="/") && st.size()>=2){
                int ans=0;
                int x1=stoi(st.top());
                st.pop();
                int x2=stoi(st.top());
                st.pop();
                if(s=="+"){
                    ans+=(x2+x1);
                }
                else if(s=="-"){
                    ans+=(x2-x1);
                }
                else if(s=="*"){
                    ans+=(x2*x1);
                }
                else{
                    ans+=(x2/x1);
                }
                st.push(to_string(ans));
            }
            else{
                st.push(s);
            }
        }
        return stoi(st.top());
        
    }
};