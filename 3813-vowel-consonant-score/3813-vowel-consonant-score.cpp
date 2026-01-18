class Solution {
public:
    int vowelConsonantScore(string s) {
        int n=s.size();
        int v=0,c=0,l=0,r=0;
        for(int i=0;i<n;i++){
            int d=s[i]-'0';
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                v++;
            }
            else if(d>=0 && d<=9){
                l++;
            }
            else if(s[i]==' '){
                r++;
            }
        }
        c=n-v-l-r;
        int score;
        if(c>0){
            score=v/c;
        }
        else{
            score=0;
        }
        return score;
    }
};