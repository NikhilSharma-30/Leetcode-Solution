class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>ans;
        ans.push_back(words[0]);
        for(int i=1;i<n;i++){
            string s=ans.back(),s1=words[i];
            sort(s.begin(),s.end());
            sort(s1.begin(),s1.end());
            if(s==s1){
                continue;
            }
            ans.push_back(words[i]);
        }
        return ans;
        
    }
};