class Solution {
public:
    bool checkGoodInteger(int n) {
        int squaresum=0,digitsum=0;
        int num=n;
        while(num>0){
            digitsum+=(num%10);
            num/=10;
        }
        while(n>0){
            int d=n%10;
            squaresum+=(d*d);
            n/=10;
        }
        if((squaresum-digitsum)>=50) return true;
        return false;
        
        
    }
};