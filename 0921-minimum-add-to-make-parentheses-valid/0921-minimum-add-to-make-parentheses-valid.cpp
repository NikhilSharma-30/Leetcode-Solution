class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int co=0;
        for(auto &c:s){
            if(c=='('){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else if(st.empty()){
                    co++;
                }
            }
        }
        return (st.size()+co);
        
    }
};