class Solution {
public:
    int arrangeCoins(int n) {
        int s=n;
        if(n==1) return n;
        for(int i=1;i<=n;i++){
            s-=i;
            if(s==0) return i;
            if(s<0) return i-1;
        }
        return 0;
        
    }
};