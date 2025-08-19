class Solution {
public:
        static bool comp(vector<int>a,vector<int>b){
            return a[1]<b[1];
        }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>v;
        sort(intervals.begin(),intervals.end(),comp);
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int>el=v.back();
            if(el[1]>intervals[i][0]){
                continue;
            }
            else{
                v.push_back(intervals[i]);
            }
        }
        return n-v.size();
        
    }
};