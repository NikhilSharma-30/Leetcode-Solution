class Solution {
public:
    bool check(int num,int v){
        int p=1;
        while(num>0){
            int d=num%10;
            p*=d;
            num/=10;
        }
        if(p%v==0) return true;
        return false;
    }
    int smallestNumber(int n, int t) {
        while(!check(n,t)){
            n++;
        }
        return n;
        
    }
};