class Solution {
public:
    string tolowercase(string s){
        string l="";
        for(auto &c:s){
            l+=tolower(c);
        }
        return l;
    }
    string tovowelcase(string s){
        string l="",v="";
        for(auto &c:s){
            l+=tolower(c);
        }
        for(auto &c:l){
            if(c=='a' || c=='i' || c=='o' || c=='u'){
                v+='e';
                continue;
            }
            v+=c;
        }
        return v;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        int n=wordlist.size(),m=queries.size();
        set<string>st;
        vector<string>ans;
        unordered_map<string,string>lower,vowel;
        for(auto &x:wordlist){
            st.insert(x);
        }
        for(auto &x:wordlist){
            if(lower.find(tolowercase(x))==lower.end()){
                lower[tolowercase(x)]=x;
            }
            if(vowel.find(tovowelcase(x))==vowel.end()){
                vowel[tovowelcase(x)]=x;
            }
        }
        for(int i=0;i<m;i++){
            string s=queries[i];
            auto it=st.find(s);
            bool f=false;
            if(it!=st.end()){
                ans.push_back(*it);
                f=true;
                continue;
            }
            string cap=tolowercase(s),vow=tovowelcase(s);
            auto l=lower.find(cap),c=vowel.find(vow);
            if(l!=lower.end()){
                ans.push_back(l->second);
                f=true;
            }
            if(f) continue;
            if(c!=vowel.end()){
                ans.push_back(c->second);
                f=true;
            }
            if(!f) ans.push_back("");
        }
        return ans; 
    }
};