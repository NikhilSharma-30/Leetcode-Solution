class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int l=1,b=1,minr=INT_MAX,maxr=INT_MIN,minc=INT_MAX,maxc=INT_MIN;
        if(grid.size()==1 && grid[0].size()==1) return grid[0][0];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    minr=min(minr,i);
                    maxr=max(maxr,i);
                }
            }
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                if(grid[i][j]==1){
                    minc=min(minc,j);
                    maxc=max(maxc,j);
                }
            }
        }
        if(minr!=INT_MAX && maxr!=INT_MIN){
            b+=(maxr-minr);
        }
        if(minc!=INT_MAX && maxc!=INT_MIN){
            l+=(maxc-minc);
        }
        return (l*b); 
    }
};