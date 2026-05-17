class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                int r1=i-1,r2=i+1,c1=j-1,c2=j+1;
                if(r1>=0 && r1<n && r2>=0 && r2<n){
                    if(c1>=0 && c1<n && c2>=0 && c2<n){
                        int m=INT_MIN;
                        for(int k=r1;k<=r2;k++){
                            for(int l=c1;l<=c2;l++){
                                m=max(m,grid[k][l]);
                            }
                        }
                        v.push_back(m);
                    }
                }
            }
            if(!v.empty()){
                ans.push_back(v);
            }
        }
        return ans;
        
    }
};