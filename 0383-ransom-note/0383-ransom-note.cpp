class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size(),n2=magazine.size();
        unordered_map<char,int>mp;
        for(auto &c:magazine){
            mp[c]++;
        }
        for(auto &c:ransomNote){
            if(mp.find(c)==mp.end()){
                return false;
            }
            else{
                if(mp[c]==0){
                    return false;
                }
                mp[c]--;
            }
        }
        return true;

        
    }
};