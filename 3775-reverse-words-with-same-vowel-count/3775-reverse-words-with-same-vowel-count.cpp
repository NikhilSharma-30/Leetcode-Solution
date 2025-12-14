class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string s1="";
        string ans="";
        int i=0;
        int c1=0;
        while(i<n && s[i]!=' '){
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
                c1++;
            }
            s1+=s[i];
            i++;
        }
        ans+=s1;
        if(i==n) return ans;
        int j=i+1,c=0;
        string s2="";
        while(j<n){
            if(s[j]==' '){
                ans+=' ';
                if(c==c1){
                    reverse(s2.begin(),s2.end());
                }
                ans+=s2;
                s2="";
                c=0;
            }
            else if(s[j]=='a' || s[j]=='e' || s[j]=='o' || s[j]=='i' || s[j]=='u'){
                c++;
                s2+=s[j];
            }
            else{
                s2+=s[j];
            }
            j++;
        }
        ans+=' ';
        if(c==c1){
            reverse(s2.begin(),s2.end());
        }
        ans+=s2;
        return ans;

        
    }
};