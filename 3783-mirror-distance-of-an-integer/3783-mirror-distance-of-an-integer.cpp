class Solution {
public:
    int mirrorDistance(int n) {
        int num=n,r=0;
        while(num>0){
            r=r*10+(num%10);
            num/=10;
        }
        return abs(n-r);
        
    }
};