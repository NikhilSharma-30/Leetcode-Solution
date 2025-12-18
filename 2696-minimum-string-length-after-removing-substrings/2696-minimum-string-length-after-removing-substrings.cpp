class Solution {
public:
    int minLength(string s) {
        int n=s.size(),c=0;
        stack<char>st;
        for(auto &ch:s){
            if(ch!='A' && ch!='B' && ch!='C' && ch!='D'){
                while(!st.empty()) st.pop();
                continue;
            }
            if(ch=='A' || ch=='C'){
                st.push(ch);
            }
            else if(ch=='B'){
                if(!st.empty() && st.top()=='A'){
                    st.pop();
                    c++;
                }
                else{
                    while(!st.empty()) st.pop();
                }
            }
            else if(ch=='D'){
                if(!st.empty() && st.top()=='C'){
                    st.pop();
                    c++;
                }
                else{
                    while(!st.empty()) st.pop();
                }
            }
        }
        return (n-2*c);
        
    }
};