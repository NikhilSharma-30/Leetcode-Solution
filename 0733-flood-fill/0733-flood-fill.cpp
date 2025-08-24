class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int colour,int original){
        int m=grid.size(),n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==colour) return;
        if(grid[i][j]!=original) return;
        grid[i][j]=colour;
        dfs(grid,i-1,j,colour,original);
        dfs(grid,i+1,j,colour,original);
        dfs(grid,i,j+1,colour,original);
        dfs(grid,i,j-1,colour,original);
        return;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m=image.size(),n=image[0].size();
        int original=image[sr][sc];
        dfs(image,sr,sc,color,original);
        return image;
        
    }
};