class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        if(n<=8) return n;
        if(n>8 && n<=16){
            n=8+(n-8)*2;
            return n;
        }
        if(n>16 && n<=24){
            n=8+16+(n-16)*3;
            return n;
        }
        n=8+16+24+(n-24)*4;
        return n;

        
    }
};