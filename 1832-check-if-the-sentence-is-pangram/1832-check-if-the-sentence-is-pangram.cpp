class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>f(26,0);
        for(auto &ch:sentence){
            int x=ch-'a';
            f[x]++;
        }
        for(auto &i:f){
            if(i==0) return false;
        }
        return true;
        
    }
};