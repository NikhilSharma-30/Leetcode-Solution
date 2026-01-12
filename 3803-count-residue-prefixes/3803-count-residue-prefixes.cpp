class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.size();
        set<char>st;
        int l=1,ans=0;
        for(auto &x:s){
            st.insert(x);
            if(st.size()==(l%3)){
                ans++;
            }
            l++;
        }
        return ans;
    }
};