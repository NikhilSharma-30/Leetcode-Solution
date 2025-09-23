class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        int min=0,fresh=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }

        while(!q.empty()){
            pair<pair<int,int>,int>p=q.front();
            pair<int,int>id=p.first;
            int t=p.second;
            int i=id.first,j=id.second;
            vis[i][j]=1;
            min=max(min,t);
            q.pop();
            for(auto &x:dir){
                int newi=i+x[0],newj=j+x[1];
                if(newi>=0 && newi<m && newj>=0 && newj<n && grid[newi][newj]==1 && vis[newi][newj]==0){
                    grid[newi][newj]=2;
                    q.push({{newi,newj},t+1});
                    vis[newi][newj]=1;
                    fresh--;
                }
            }
        }
        if(fresh==0){
            return min;
        }
        return -1;
        
    }
};