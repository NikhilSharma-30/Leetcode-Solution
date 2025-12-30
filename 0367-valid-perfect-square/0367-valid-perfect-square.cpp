class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1,r=num;
        if(num==1) return true;
        while(l<r){
            int m=l+(r-l)/2;
            long long s=1LL*m*m;
            if(s==num){
                return true;
            }
            else if(s<num){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return false;
        
    }
};