class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int>ans,v;
        for(int i=0;i<n;i++){
            if(s[i]==c) v.push_back(i);
        }
        int n1=v.size();
        for(int i=0;i<n;i++){
            int m=INT_MAX;
            for(int j=0;j<n1;j++){
                m=min(m,abs(i-v[j]));
            }
            ans.push_back(m);
        }
        return ans;
        
    }
};