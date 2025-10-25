class Solution {
public:
    int totalMoney(int n) {
        int x=0,amt=0;
        if(n<=7) return (n*(n+1))/2;
        while(n){
            x++;
            int p=x;
            for(int i=0;i<7;i++){
                if(n==0) break;
                amt+=p;
                p++;
                n--;
            }
        }
        return amt;
        
    }
};