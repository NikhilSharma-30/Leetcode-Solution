class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int le=0;
        string ans="";
        for(int i=0;i<n;i++){
            int l=i,r=i;
            string s1="";
            while(l>=0 && r<n && s[l]==s[r]){
                if(l!=i){
                    s1=s[l]+s1+s[r];
                }
                else{
                    s1+=s[l];
                }
                if(s1.size()>le){
                    le=max(le,(int)s1.size());
                    ans=s1;
                }
                l--;
                r++;
            }
            if(s1.size()>le){
                le=max(le,(int)s1.size());
                ans=s1;
            }
        } 
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            string s1="";
            if((i+1)>=n) continue;
            if(s[l]!=s[r]) continue;
            while(l>=0 && r<n && s[l]==s[r]){
                s1=s[l]+s1+s[r];
                if(s1.size()>le){
                    le=max(le,(int)s1.size());
                    ans=s1;
                }
                l--;
                r++;
            }
            if(s1.size()>le){
                le=max(le,(int)s1.size());
                ans=s1;
            }
        } 
        return ans;
    }
};