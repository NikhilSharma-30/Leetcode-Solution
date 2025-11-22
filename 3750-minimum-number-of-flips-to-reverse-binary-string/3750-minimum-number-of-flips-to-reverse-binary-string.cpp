class Solution {
public:
    int minimumFlips(int n) {
        int c=0;
        string s="",s1="";
        while(n!=1){
            if(n%2==0){
                s+='0';
            }
            else{
                s+='1';
            }
            n/=2;
        }
        s+='1';
        s1=s;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i]) c++;
        }
        return c;
        
    }
};