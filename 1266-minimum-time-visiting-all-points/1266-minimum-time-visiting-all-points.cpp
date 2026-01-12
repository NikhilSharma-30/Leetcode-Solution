class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n=points.size();
        int ans=0;
        for(int i=1;i<n;i++){
            int x=points[i-1][0],y=points[i-1][1];
            int cx=points[i][0],cy=points[i][1];
            ans+=max(abs(x-cx),abs(y-cy));
        }
        return ans;
    }
};