class Solution {
public:
    int removeAlmostEqualCharacters(string word) {
        int n=word.size(),c1=0,c=0;
        if(word.size()==1) return 0;
        if(word.size()==2){
            if(word[0]==word[1] || abs(word[0]-word[1])==1) return 1;
            return 0;
        }
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1] || abs(word[i]-word[i-1])==1){
                c++;
                i++;
            }
        }
        return c;
    }
};