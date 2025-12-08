class Solution {
public:
    int countTriples(int n) {
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                int p=i*i+j*j;
                float sq=sqrt(p);
                int x=floor(sq);
                float diff=sq-x;
                if(diff==0 && x<=n) c++;
            }
        }
        return c;
        
    }
};