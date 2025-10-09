class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&grid,int f,vector<vector<int>>&h){
        int m=grid.size(),n=grid[0].size();
        grid[r][c]=1;
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        for(auto &x:dir){
            int newr=r+x[0],newc=c+x[1];
            if(newr>=0 && newr<m && newc>=0 && newc<n && h[r][c]<=h[newr][newc] && grid[newr][newc]!=1){
                dfs(newr,newc,grid,f,h);
            }
        }
        return;

    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m=heights.size(),n=heights[0].size();
        vector<vector<int>>p(m,vector<int>(n,0)),a(m,vector<int>(n,0));
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            dfs(0,i,p,0,heights);
        }
        for(int i=0;i<m;i++){
            dfs(i,0,p,0,heights);
        }
        for(int i=0;i<n;i++){
            dfs(m-1,i,a,1,heights);
        }
        for(int i=0;i<m;i++){
            dfs(i,n-1,a,1,heights);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(p[i][j]==1 && a[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;


        
    }
};