class Solution {
public:
    string reverseByType(string s) {
        int n=s.size();
        string s1="",s2="";
        vector<int>alph,sp;
        for(int i=0;i<n;i++){
            if(islower(s[i])){
                alph.push_back(i);
                s1+=s[i];
            }
            else{
                sp.push_back(i);
                s2+=s[i];
            }
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(islower(s[k])){
                s[k]=s1[i];
                i++;
            }
            else{
                s[k]=s2[j];
                j++;
            }
        }
        return s;
    }
};