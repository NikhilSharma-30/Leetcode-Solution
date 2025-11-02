class Solution {
public:
    void solve(int i,int j,vector<vector<int>>& grid){
        int m=grid.size(),n=grid[0].size();
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==-1) return;
        int r=i,c=j;
        r--;
        while(r>=0 && r<m){
            if(grid[r][c]==-1 || grid[r][c]==2) break;
            grid[r][c]=1;
            r--;
        }
        r=i,c=j;
        r++;
        while(r>=0 && r<m){
            if(grid[r][c]==-1 || grid[r][c]==2) break;
            grid[r][c]=1;
            r++;
        }
        r=i,c=j;
        c++;
        while(c>=0 && c<n){
            if(grid[r][c]==-1 || grid[r][c]==2) break;
            grid[r][c]=1;
            c++;
        }
        r=i,c=j;
        c--;
        while(c>=0 && c<n){
            if(grid[r][c]==-1 || grid[r][c]==2) break;
            grid[r][c]=1;
            c--;
        }
        return ;
        
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        int ans=0;
        vector<vector<int>>grid(m,vector<int>(n,0));
        for(auto &x:guards){
            int i=x[0],j=x[1];
            grid[i][j]=2;
        }
        for(auto &x:walls){
            int i=x[0],j=x[1];
            grid[i][j]=-1;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    solve(i,j,grid);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    ans++;
                }
            }
        }
        return ans;     
    }
};