class Solution {
public:
    int countMonobit(int n) {
        if(n==0) return 1;
        int c=1;
        int j=1;
        while((pow(2,j)-1)<=n){
            c++;
            j++;
        }
        return c;
        
    }
};