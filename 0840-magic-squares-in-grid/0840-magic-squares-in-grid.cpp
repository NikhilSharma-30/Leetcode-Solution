class Solution {
public:
    bool check(int si,int ei,int sj,int ej,vector<vector<int>>&grid){
        int m=grid.size(),n=grid[0].size();
        if(si<0 || ei>=m || sj<0 || ej>=n) return false;
        vector<int>v;
        set<int>st;
        for(int i=si;i<=ei;i++){
            int s=0;
            for(int j=sj;j<=ej;j++){
                if(grid[i][j]>9 || grid[i][j]<1) return false;
                st.insert(grid[i][j]);
                s+=grid[i][j];
            }
            v.push_back(s);
        }
        if(st.size()!=9) return false;
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
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++){
            int si=i,ei=i+2;
            for(int j=0;j<n;j++){
                int sj=j,ej=j+2;
                if(check(si,ei,sj,ej,grid)) ans++;   
            }
        }
        return ans;
    }
};