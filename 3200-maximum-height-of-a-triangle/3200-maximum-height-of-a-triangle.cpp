class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int i=1,c1=0,c2=0;
        int r1=red,b1=blue;
        while(true){ 
            if(i%2==1){
                if(r1<i) break;
                r1-=i;
            }
            else{
                if(b1<i) break;
                b1-=i;
            }
            c1++;
            i++;
        }
        r1=red,b1=blue,i=1;
        while(true){
            if(i%2==1){
                if(b1<i) break;
                b1-=i;
            }
            else{
                if(r1<i) break;
                r1-=i;
            }
            c2++;
            i++;
        }
        return max(c1,c2);
    }
};