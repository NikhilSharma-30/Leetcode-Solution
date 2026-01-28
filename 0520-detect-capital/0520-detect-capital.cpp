class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                v.push_back(i);
            }
        }
        if(v.size()==0 || v.size()==n) return true;
        if(v.size()==1 && v[0]==0){
            return true;
        }
        return false;
        
    }
};