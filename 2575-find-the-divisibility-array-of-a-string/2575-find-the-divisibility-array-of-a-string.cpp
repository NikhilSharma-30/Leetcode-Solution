#define ll long long
class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        int n=word.size();
        vector<int>div;
        string s="";
        ll num=-1;
        for(auto &c:word){
            int d=c-'0';
            if(num==-1){
                num=d;
                if(num%m==0){
                    div.push_back(1);
                }
                else{
                    div.push_back(0);
                }
                continue;
            }
            num=(num*10+d)%m;
            if(num==0){
                div.push_back(1);
            }
            else{
                div.push_back(0);
            }
        }
        return div;
        
    }
};