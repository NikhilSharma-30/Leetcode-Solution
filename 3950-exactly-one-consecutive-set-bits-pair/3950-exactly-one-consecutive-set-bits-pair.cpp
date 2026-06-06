class Solution {
public:
    bool consecutiveSetBits(int n) {
        string s;
        while(n>0){
            if(n%2==1){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
            n/=2;         
        }
        int n1=s.size(),c=0;
        for(int i=1;i<n1;i++){
            if(s[i-1]=='1' && s[i]=='1') c++;
        }
        if(c==1) return true;
        return false;
        
    }
};