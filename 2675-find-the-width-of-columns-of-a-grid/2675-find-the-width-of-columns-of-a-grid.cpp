class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<int>ans;
        for(int j=0;j<n;j++){
            int l=1;
            for(int i=0;i<m;i++){
                int el=grid[i][j],c=0;
                int val=abs(el);
                while(val>0){
                    c++;
                    val/=10;
                }
                if(el<0) c++;
                l=max(l,c);
            }
            ans.push_back(l);
        }
        return ans;
        
    }
};