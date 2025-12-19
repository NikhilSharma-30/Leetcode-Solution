class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size(),c=0;
        for(int i=0;i<n;i++){
            string s1="";
            for(int j=i;j<n;j++){
                s1+=s[j];
                string s2=s1;
                reverse(s2.begin(),s2.end());
                if(s1==s2) c++;
            }
        }
        return c;
        
    }
};