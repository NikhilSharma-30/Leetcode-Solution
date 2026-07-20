class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        while(k--){
            vector<vector<int>>v(m,vector<int>(n,0));
            for(int i=0;i<m;i++){
                for(int j=1;j<n;j++){
                    v[i][j]=grid[i][j-1];
                }
            }
            for(int i=1;i<m;i++){
                for(int j=0;j<n;j++){
                    v[i][0]=grid[i-1][n-1];
                }
            }
            v[0][0]=grid[m-1][n-1];
            grid=v;
        }
        return grid;
    }
};