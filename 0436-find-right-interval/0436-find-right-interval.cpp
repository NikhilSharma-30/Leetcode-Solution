class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int>ans;
        vector<vector<int>>v=intervals;
        sort(v.begin(),v.end());
        unordered_map<int,int>mp,mp1;
        for(int i=0;i<n;i++){
            mp1[intervals[i][0]]=i;
        }
        for(auto &x:v){
            int s=x[0],e=x[1];
            int l=0,r=n-1;
            bool f=false;
            int id=INT_MAX;
            while(l<=r){
                int m=l+(r-l)/2;
                if(v[m][0]>=e){
                    f=true;
                    id=min(id,v[m][0]);
                    if(v[m][0]==e) break;
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(!f){
                mp[s]=-1;
            }
            else{
                mp[s]=mp1[id];
            }
        }
        for(auto &x:intervals){
            ans.push_back(mp[x[0]]);
        }
        return ans;
    }
};