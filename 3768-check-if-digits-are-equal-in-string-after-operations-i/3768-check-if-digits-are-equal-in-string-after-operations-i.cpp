class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string s1="";
            for(int i=1;i<s.size();i++){
                int x1=s[i-1]-'0',x2=s[i]-'0';
                int cal=(x1+x2)%10;
                s1+=to_string(cal);
            }
            s=s1;
        }
        if(s[0]==s[1]) return true;
        return false;      
    }
};