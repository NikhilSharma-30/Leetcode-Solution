class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.size();
        unordered_map<char,int>mp1,mp2;
        for(int i=0;i<n;i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto &x:mp1){
            char ch=x.first;
            int f1=x.second;
            if(mp2.find(ch)==mp2.end()){
                if(f1>3) return false;
            }
            else{
                if(abs(f1-mp2[ch])>3) return false;
            }
        }
        for(auto &x:mp2){
            char ch=x.first;
            int f2=x.second;
            if(mp1.find(ch)==mp2.end()){
                if(f2>3) return false;
            }
            else{
                if(abs(f2-mp1[ch])>3) return false;
            }
        }
        return true;
    }
};