class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n=s.size(),ans=0;
        int i=0,j=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>=k){
                ans+=(n-j);
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        return ans;
        
    }
};