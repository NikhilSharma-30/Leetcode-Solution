class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s="";
        while(n>1){
            if(n%2==0){
                s+='0';
            }
            else{
                s+='1';
            }
            n/=2;
        }
        s+='1';
        reverse(s.begin(),s.end());
        for(int i=1;i<s.size();i++){
            if((s[i-1]=='0' && s[i]=='0') || (s[i-1]=='1' && s[i]=='1')){
                return false;
            }
        }
        return true;
    }
};