class Solution {
public:
    long long flowerGame(int n, int m) {
        long long no=0,mo=0;
        for(int i=1;i<=n;i++){
            if(i%2==1) no++;
        }
        for(int i=1;i<=m;i++){
            if(i%2==1) mo++;
        }
        return (no*(m-mo)+mo*(n-no));       
    }
};