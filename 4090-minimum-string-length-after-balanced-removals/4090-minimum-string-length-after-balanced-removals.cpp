class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n=s.size(),c=1;;
        stack<int>st;
        for(auto &i:s){
            if(st.empty()){
                st.push(i);
            }
            else if(!st.empty() && i=='a' && st.top()=='b'){
                st.pop();
            }
            else if(!st.empty() && i=='b' && st.top()=='a'){
                st.pop();
            }
            else{
                st.push(i);
            }
        }
        return st.size();
        
    }
};