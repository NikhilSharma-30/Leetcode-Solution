class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size(),l=1;
        for(int i=0;i<n;i++){
            vector<int>alp(26,0);
            set<int>st;
            for(int j=i;j<n;j++){
                int x=s[j]-'a';
                alp[x]++;
                st.insert(s[j]);
                bool f=true;
                int eachf=(j-i+1)/(int)st.size();
                for(int k=0;k<26;k++){
                    if(alp[k]!=0 && alp[k]!=eachf){
                        f=false;
                        break;
                    }
                }
                if(f){
                    l=max(l,j-i+1);
                }
            }
        }
        return l;  
    }
};