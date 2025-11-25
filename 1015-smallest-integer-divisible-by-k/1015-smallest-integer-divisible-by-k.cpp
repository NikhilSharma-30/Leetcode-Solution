class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0) return -1;
        int rem=1,c=1;
        if(k==1) return c;
        while(rem){
            rem=(rem*10+1)%k;
            c++;
        }
        return c;

    }
};