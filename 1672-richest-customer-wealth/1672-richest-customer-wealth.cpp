class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        for(auto &x:accounts){
            vector<int>v=x;
            int s=accumulate(v.begin(),v.end(),0);
            m=max(m,s);
        }
        return m;
    }
};