class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int x=2*k;
        if(n==1 || k==1) return s;
        string ans="";
        int i=0;
        for(i=0;i<n;i+=x){
            string s1=s.substr(i,x);
            if(s1.size()<=k){
                reverse(s1.begin(),s1.end());
                ans+=s1;
                continue;
            }
            
            reverse(s1.begin(),s1.begin()+k);
            ans+=s1;
        }
        return ans;
    }
};