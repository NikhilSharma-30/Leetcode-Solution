class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int e=INT_MAX;
        for(auto &x:tasks){
            e=min(e,x[0]+x[1]);
        }
        return e;
    }
};