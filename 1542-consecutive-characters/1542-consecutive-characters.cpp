class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int j=1,c=1,l=1;
        while(j<n){
            if(s[j-1]!=s[j]){
                l=max(l,c);
                c=1;
            }
            else{
                c++;
            }
            j++;
        }
        l=max(l,c);
        return l;
        
    }
};