class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size(),ans=0;
        vector<pair<char,int>>s;
        s.push_back({colors[0],0});
        for(int i=1;i<n;i++){
            pair<char,int>p=s.back();
            char c=p.first;
            int id=p.second;
            if(c==colors[i]){
                int x=min(neededTime[id],neededTime[i]);
                if(x==neededTime[i]){
                    ans+=neededTime[i];
                }
                else{
                    ans+=neededTime[id];
                    s.pop_back();
                    s.push_back({colors[i],i});
                }
            }
            else{
                s.push_back({colors[i],i});
            }
        }
        return ans;
    }
};