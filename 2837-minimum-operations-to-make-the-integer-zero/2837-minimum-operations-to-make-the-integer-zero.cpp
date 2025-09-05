class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int t=1;
        while(t<=35){
            long long val=(1LL*num1)-(1LL*t*num2);
            if(val<0) return -1;
            int setbits=__builtin_popcountll(val);
            if(t>=setbits && t<=val) return t;
            t++;
        }
        return -1;  
    }
};