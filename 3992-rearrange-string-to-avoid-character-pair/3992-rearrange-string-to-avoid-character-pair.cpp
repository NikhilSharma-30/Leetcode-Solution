class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string ans="";
        for(auto &c:s){
            if(c==y){
                ans+=c;
            }
        }
        for(auto &c:s){
            if(c!=y){
                ans+=c;
            }
        }
        return ans;    
    }
};