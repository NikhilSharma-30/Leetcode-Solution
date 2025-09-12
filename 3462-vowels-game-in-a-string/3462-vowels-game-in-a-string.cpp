class Solution {
public:
    bool doesAliceWin(string s) {
        int co=0;
        for(auto &c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u') co++;
        }
        if(co==0) return false;
        return true;
    }
};