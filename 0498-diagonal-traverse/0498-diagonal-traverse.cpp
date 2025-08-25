class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<m;i++){
            int k=i,p=0;
            vector<int>v;
            while(k>=0 && p<n){
                v.push_back(mat[k][p]);
                k--;
                p++;
            }
            ans.push_back(v);
        }
        for(int j=1;j<n;j++){
            int k=j,p=m-1;
            vector<int>v;
            while(p>=0 && k<n){
                v.push_back(mat[p][k]);
                k++;
                p--;
            }
            ans.push_back(v);
        }
        for(int i=0;i<ans.size();i++){
            if(i%2==1){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        vector<int>final;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                final.push_back(ans[i][j]);
            }
        }
        return final;
        
    }
};