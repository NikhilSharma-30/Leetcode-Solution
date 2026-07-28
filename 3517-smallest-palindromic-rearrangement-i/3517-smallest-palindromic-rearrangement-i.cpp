class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
        if(n==2){
            if(s[0]>s[1]){
                return s;
            }
            else{
                reverse(s.begin(),s.end());
                return s;
            }
        }
        map<char,int>mp;
        string ans="";
        for(auto &c:s){
            mp[c]++;
        }
        if(n%2==0){
            for(auto &x:mp){
                char ch=x.first;
                int f=x.second;
                for(int i=0;i<(f/2);i++){
                    ans+=ch;
                }
            }
            int n1=ans.size();
            for(int i=n1-1;i>=0;i--){
                ans+=ans[i];
            }
        }
        else{
            for(auto &x:mp){
                char ch=x.first;
                int f=x.second;
                for(int i=0;i<(f/2);i++){
                    ans+=ch;
                }
            }
            for(auto &x:mp){
                char ch=x.first;
                int f=x.second;
                if(f%2==1){
                    ans+=ch;
                }
            }
            int n1=ans.size();
            for(int i=n1-2;i>=0;i--){
                ans+=ans[i];
            }
        }
        return ans;
        
        
    }
};