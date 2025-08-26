class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size(),area=0;
        int d=0;
        for(int i=0;i<n;i++){
            int l=dimensions[i][0],b=dimensions[i][1];
            int sq=(l*l)+(b*b);
            d=max(sq,d);
        }
        for(int i=0;i<n;i++){
            int l=dimensions[i][0],b=dimensions[i][1];
            int sq=(l*l)+(b*b);
            if(sq==d) area=max(area,l*b);
        }
        return area;
    }
};