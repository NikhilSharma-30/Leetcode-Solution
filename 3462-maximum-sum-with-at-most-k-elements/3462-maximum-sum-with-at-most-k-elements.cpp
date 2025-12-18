class Solution {
public:
    static bool comp(vector<int>a,vector<int>b){
        return a[0]>b[0];
    }
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        int m=grid.size(),n=grid[0].size();
        long long s=0;
        if(k==0) return 0;
        vector<int>l=limits;
        vector<vector<int>>v;
        for(int i=0;i<m;i++){
            sort(grid[i].begin(),grid[i].end(),greater<int>());
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(l[i]>0){
                    if(pq.size()<k){
                        pq.push(grid[i][j]);
                    }
                    else if(grid[i][j]>pq.top()){
                        pq.pop();
                        pq.push(grid[i][j]);
                    }
                    l[i]--;
                }
            }
        }
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }
        return s;
        
    }
};