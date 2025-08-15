class Solution {
public:
    bool isPowerOfFour(int n) {
        int p=1;
        while(p<n){
            p*=4;
        }
        if(p==n) return true;
        return false;
        
    }
};