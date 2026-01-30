class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n=s.size(),c=1;
        vector<vector<int>>ans;
        int i=1;
        for(i=1;i<n;i++){
            if(s[i-1]!=s[i]){
                if(c>=3){
                    vector<int>v;
                    v.push_back(i-1-(c-1));
                    v.push_back(i-1);
                    ans.push_back(v);
                }
                c=1;
            }
            else{
                c++;
            }
        }
        if(c>=3){
            vector<int>v;
            v.push_back(i-1-(c-1));
            v.push_back(i-1);
            ans.push_back(v);
        }
        return ans;  
    }
};