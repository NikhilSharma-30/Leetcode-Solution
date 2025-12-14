class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(auto &c:s){
            if(isalpha(c) || isdigit(c)){
                s1+=tolower(c);
            }
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());
        if(s1==s2) return true;
        return false;
        
    }
};