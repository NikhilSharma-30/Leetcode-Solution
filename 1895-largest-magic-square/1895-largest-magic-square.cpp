class Solution {
public:
    bool check(int si,int ei,int sj,int ej,vector<vector<int>>&grid){
        int m=grid.size(),n=grid[0].size();
        if(si<0 || ei>=m || sj<0 || ej>=n) return false;
        vector<int>v;
        for(int i=si;i<=ei;i++){
            int s=0;
            for(int j=sj;j<=ej;j++){
                s+=grid[i][j];
            }
            v.push_back(s);
        }
        for(int j=sj;j<=ej;j++){
            int s=0;
            for(int i=si;i<=ei;i++){
                s+=grid[i][j];
            }
            v.push_back(s);
        }
        int s=0;
        int i=si,j=sj;
        while(i<=ei && j<=ej){
            s+=grid[i][j];
            i++;
            j++;
        }
        v.push_back(s);
        s=0;
        i=si,j=ej;
        while(i<=ei && j>=sj){
            s+=grid[i][j];
            i++;
            j--;
        }
        v.push_back(s);
        int ns=v.size();
        for(int i=1;i<ns;i++){
            if(v[i-1]!=v[i]) return false;
        }
        return true;
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=1;
        int k=1;
        while(k<n){
            for(int i=0;i<m;i++){
                int si=i,ei=i+k;
                for(int j=0;j<n;j++){
                    int sj=j,ej=j+k;
                    if(check(si,ei,sj,ej,grid)){
                        ans=max(ans,k+1);
                    }
                }
            }
            k++;
        }
        return ans;
    }
};