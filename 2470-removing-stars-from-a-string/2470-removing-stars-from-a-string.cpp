class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto &c:s){
            if(c=='*'){
                if(!st.empty()) st.pop();
            }
            else{
                st.push(c);
            }
        }
        string s1="";
        while(!st.empty()){
            s1+=(st.top());
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;

        
    }
};