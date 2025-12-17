class Solution {
public:
    int m=1e9+7;
    long long fact(int num){
        if(num==1) return 1;
        return (num*fact(num-1))%m;
    }
    bool check(int num){
        if(num==1) return false;
        for(int i=2;i<=(num/2);i++){
            if(num%i==0) return false;
        }
        return true;
    }
    int numPrimeArrangements(int n) {
        int c=0;
        if(n==1) return 1;
        for(int i=1;i<=n;i++){
            if(check(i)) c++;
        }
        long long ans=(fact(c)*fact(n-c))%m;
        return (int)ans;
    }
};