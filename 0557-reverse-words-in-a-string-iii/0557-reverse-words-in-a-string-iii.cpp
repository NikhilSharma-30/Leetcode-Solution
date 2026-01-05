class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>v;
        string s1="",ans="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                v.push_back(s1);
                s1="";
            }
            else{
                s1+=s[i];
            }
        }
        v.push_back(s1);
        for(auto &x:v){
            reverse(x.begin(),x.end());
        }
        int n1=v.size();
        for(int i=0;i<n1;i++){
            ans+=v[i];
            if(i==(n1-1)) break;
            ans+=' ';
        }
        return ans;
    }
};