
class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for(int i=m-1;i>=0;i--){
            int k=i,l=0;
            vector<int>v;
            while(k<m && l<n){
                v.push_back(grid[k][l]);
                k++;
                l++;
            }
            sort(v.begin(),v.end(),greater<int>());
            k=i,l=0;
            int id=0;
            while(k<m && l<n){
                grid[k][l]=v[id];
                id++;
                k++;
                l++;
            }
        }
        for(int i=1;i<n;i++){
            int k=0,l=i;
            vector<int>v;
            while(k<m && l<n){
                v.push_back(grid[k][l]);
                k++;
                l++;
            }
            sort(v.begin(),v.end());
            k=0,l=i;
            int id=0;
            while(k<m && l<n){
                grid[k][l]=v[id];
                id++;
                k++;
                l++;
            }
        }
        return grid;
        
    }
};