class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        string currs="";
        set<string>st;
        while(j<n){
            while((j-i+1)>k){
                currs.erase(0,1);
                i++;
            }
            currs+=s[j];
            if((j-i+1)==k){
                st.insert(currs);
            }
            j++;
        }
        int c=1*pow(2,k);
        if(st.size()==c) return true;
        return false;
        
    }
};