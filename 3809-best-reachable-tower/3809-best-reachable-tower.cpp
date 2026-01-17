#define ll long long 
class Solution {
public:
    int xr,yr;
    static bool comp(const vector<int>&v1,const vector<int>&v2){
        if(v1[2]==v2[2]){
            if(v1[0]==v2[0]){
                return v1[1]<v2[1];
            }
            return v1[0]<v2[0];
        }
        return v1[2]>v2[2];
    }
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int n=towers.size();
        xr=center[0],yr=center[1];
        vector<int>ans={-1,-1};
        sort(towers.begin(),towers.end(),comp);
        for(auto &x:towers){
            int x1=x[0],y1=x[1];
            int d=abs(x1-xr)+abs(y1-yr);
            if(d<=radius){
                vector<int>v1;
                v1.push_back(x[0]);
                v1.push_back(x[1]);
                ans=v1;
                break;
            }
        }
        return ans;
    }
};