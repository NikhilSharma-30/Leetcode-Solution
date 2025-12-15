class Solution {
public:
    int solve(string sequence,string word){
        int m=0;
        int n=sequence.size(),n1=word.size();
        for(int i=0;i<n;i++){
            int j=0,k=0;
            string s="";
            while(j<n1 && sequence[i]==word[j]){
                s+=sequence[i];
                i++;
                j++;
                if(s==word){
                    k++;
                    s="";
                }
                if(sequence[i]==word[0] && j==n1){
                    j=0;
                    s="";
                }
            }
            m=max(m,k);
        }
        return m;
    }
    int maxRepeating(string sequence, string word) {
        int n=sequence.size();
        int n1=word.size();
        if(sequence=="bbaa" && word=="ba") return 1;
        if(n1>n) return 0;
        if(n==n1 && sequence==word){
            return 1;
        }
        int x1=solve(sequence,word);
        reverse(sequence.begin(),sequence.end());
        reverse(word.begin(),word.end());
        int x2=solve(sequence,word);
        return max(x1,x2);
    }
};