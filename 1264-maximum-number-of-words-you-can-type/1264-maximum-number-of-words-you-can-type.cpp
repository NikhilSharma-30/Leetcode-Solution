class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int c=0;
        string s="";
        set<char>st;
        for(auto &c:brokenLetters){
            st.insert(c);
        }
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                bool f=false;
                for(auto &c:s){
                    if(st.find(c)!=st.end()){
                        f=true;
                        break;
                    }
                }
                if(!f) c++;
                s="";
            }
            else{
                s+=text[i];
            }
        }
        bool f=false;
        for(auto &c:s){
            if(st.find(c)!=st.end()){
                f=true;
                break;
            }
        }
        if(!f) c++;
        return c;
    }
};