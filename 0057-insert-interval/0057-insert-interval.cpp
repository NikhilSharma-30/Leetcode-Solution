class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int n=intervals.size();
        for(int i=1;i<n;i++){
            vector<int>v=ans.back();
            if(v[1]>=intervals[i][0]){
                ans[ans.size()-1][1]=max(ans[ans.size()-1][1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;  
    }
};