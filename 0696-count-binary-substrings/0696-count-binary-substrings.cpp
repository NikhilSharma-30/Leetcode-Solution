class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        vector<int>v;
        int i=1;
        int c=1,ans=0;
        while(i<n){
            if(s[i-1]==s[i]){
                c++;
            }
            else{
                v.push_back(c);
                c=1;
            }
            i++;
        }
        v.push_back(c);
        int n1=v.size();
        for(int i=1;i<n1;i++){
            ans+=min(v[i-1],v[i]);
        }
        return ans;
        
    }
};