class Solution {
public:
    int findscore(string s1){
        int n1=s1.size();
        int c=0;
        for(int i=1;i<n1;i++){
            if(s1[i]==s1[i-1]) c++;
        }
        return c;
    }
    int countRotations(string s, int k) {
        int n=s.size();
        int ans=0;
        if(findscore(s)==k) ans++;
        int x=n-1;
        while(x--){
            string s1="";
            string s2=s.substr(1,n-1);
            char ch=s[0];
            for(auto &c:s2){
                s1+=c;
            }
            s1+=ch;
            if(findscore(s1)==k) ans++;
            s=s1;
        }
        return ans;
        
    }
};