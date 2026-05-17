class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            int v1=s[i]-'0',v2=s[i-1]-'0';
            if(abs(v1-v2)>2) return false;
        }
        return true;
        
    }
};