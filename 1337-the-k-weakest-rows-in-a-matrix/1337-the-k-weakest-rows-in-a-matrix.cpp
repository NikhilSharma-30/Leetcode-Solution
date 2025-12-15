class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>>v;
        vector<int>ans;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]){
                    c++;
                }
            }
            v.push_back({c,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            ans.push_back(v[i][1]);
        }
        return ans;
        
    }
};