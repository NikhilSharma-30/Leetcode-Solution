class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        int fc=0,fv=0;
        for(auto &x:s){
            mp[x]++;
        }
        for(auto &x:mp){
            char ch=x.first;
            int f=x.second;
            if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u'){
                fc=max(fc,f);
            }
            else{
                fv=max(fv,f);
            }
        }
        return (fc+fv);
        
    }
};