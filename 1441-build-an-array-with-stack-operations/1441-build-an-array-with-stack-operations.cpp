class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>v;
        vector<string>ans;
        string s1="Push",s2="Pop";
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int i=0,j=0;
        int m=target.size();
        while(i<m && j<n){
            if(target[i]==v[j]){
                ans.push_back(s1);
                i++;
                j++;
            }
            else{
                ans.push_back(s1);
                ans.push_back(s2);
                j++;
            }
        }
        return ans;
        
    }
};