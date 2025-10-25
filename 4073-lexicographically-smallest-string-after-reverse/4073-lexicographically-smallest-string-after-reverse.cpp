class Solution {
public:
    string lexSmallest(string s) {
        int n=s.size();
        vector<string>ans;
        for(int k=1;k<=n;k++){
            string s1=s;
            string s2=s;
            reverse(s1.begin(),s1.begin()+k);
            reverse(s2.end()-k,s2.end());
            ans.push_back(s1);
            ans.push_back(s2);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};