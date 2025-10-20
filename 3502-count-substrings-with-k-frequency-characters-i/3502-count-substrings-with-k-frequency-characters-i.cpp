class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            bool fl=false;
            vector<int>f(26,0);
            for(int j=i;j<n;j++){
                int id=(s[j]-'a');
                f[id]++;
                for(auto &x:f){
                    if(x==k){
                        fl=true;
                        ans+=(n-j);
                        break;
                    }
                }
                if(fl) break;
            }
        }
        return ans;
        
    }
};