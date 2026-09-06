class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
        int sr=source[0],sc=source[1];
        int tr=target[0],tc=target[1];
        int ss=sr+sc;
        int ts=tr+tc;
        if(((ss%2)+(ts%2))==1) return -1;
        int i=sr,j=sc;
        while(i<=8 && j<=8){
            if(i==tr && j==tc) return 1;
            i++;
            j++;
        }
        i=sr,j=sc;
        while(i>=1 && j>=1){
            if(i==tr && j==tc) return 1;
            i--;
            j--;
        }
        i=sr,j=sc;
        while(i>=1 && j<=8){
            if(i==tr && j==tc) return 1;
            i--;
            j++;
        }
        i=sr,j=sc;
        while(i<=8 && j>=1){
            if(i==tr && j==tc) return 1;
            i++;
            j--;
        }
        return 2;    
    }
};