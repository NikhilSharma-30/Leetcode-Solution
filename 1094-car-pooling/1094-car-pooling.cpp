class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        int ma=INT_MIN,mi=INT_MAX;
        for(auto &x:trips){
            mi=min(mi,x[1]);
            ma=max(ma,x[2]);
        }
        for(int i=mi;i<=ma;i++){
            int curr=0;
            for(auto &x:trips){
                if(i>=x[1] && i<x[2]){
                    curr+=x[0];
                }
            }
            if(curr>capacity) return false;
        }
        return true;
        
    }
};