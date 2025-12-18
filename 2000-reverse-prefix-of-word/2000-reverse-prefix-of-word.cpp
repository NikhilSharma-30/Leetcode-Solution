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
        id=id+1;
        for(int i=0;i<id;i++){
            word[i]=st.top();
            st.pop();
        }
        return word;
    }
};