class Solution {
public:
    int smallestNumber(int n) {
        int x=0;
        int p=pow(2,x)-1;
        while(p<n){
            x++;
            p=pow(2,x)-1;
        }
        return p;
        
    }
};