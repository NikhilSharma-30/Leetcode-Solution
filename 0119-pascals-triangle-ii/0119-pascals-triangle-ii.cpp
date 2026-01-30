class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex+1;
        vector<vector<int>>v;
        v.push_back({1});
        if(n==1) return v[0];
        v.push_back({1,1});
        if(n==2) return v[1];
        n-=2;
        while(n){
            vector<int>v2;
            v2.push_back(1);
            vector<int>v1=v.back();
            int n1=v1.size();
            for(int j=1;j<n1;j++){
                v2.push_back(v1[j]+v1[j-1]);
            }
            v2.push_back(1);
            v.push_back(v2);
            n--;
        }
        return v[rowIndex];
    }
};