class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>v=score;
        vector<string>ans;
        sort(v.begin(),v.end(),greater<int>());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[v[i]]=(i+1);
        }
        for(auto &x:score){
            int rank=mp[x];
            if(rank==1){
                ans.push_back("Gold Medal");
            }
            else if(rank==2){
                ans.push_back("Silver Medal");
            }
            else if(rank==3){
                ans.push_back("Bronze Medal");
            }
            else{
                ans.push_back(to_string(mp[x]));
            }
        }
        return ans;
    }
};