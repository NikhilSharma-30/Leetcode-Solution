class Solution {
public:
    string sortVowels(string s) {
        string v="aeiou";
        string seq="";
        for(auto &c:s){
            bool f=true;
            char ch=tolower(c);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                seq+=c;
            }
        }
        sort(seq.begin(),seq.end());
        int id=0;
        for(int i=0;i<s.size();i++){
            char c=tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                s[i]=seq[id];
                id++;
            }
        }
        return s;
    }
};