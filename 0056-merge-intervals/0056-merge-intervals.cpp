class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>v;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int>l=v.back();
            int ma=max(l[1],intervals[i][0]);
            if(ma==l[1]){
                int el=max(l[1],intervals[i][1]);
                v.pop_back();
                v.push_back({l[0],el});
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return v;
        
    }
};