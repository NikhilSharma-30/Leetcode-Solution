class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        stack<char>st;
        int id=-1;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                id=i;
                st.push(ch);
                break;
            }
            st.push(word[i]);
        }
        if(id==-1) return word;
        string ans="";
        while(!st.empty()){
            ans+=(st.top());
            st.pop();
        }
        int x=id+1;
        if(x<n){
            for(int i=x;i<n;i++){
                ans+=word[i];
            }
        }
        return ans;
    }
};