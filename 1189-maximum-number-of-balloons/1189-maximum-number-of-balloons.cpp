class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int m=INT_MAX;
        unordered_map<char,int>mp;
        mp['b']=0,mp['a']=0,mp['l']=0,mp['o']=0,mp['n']=0;
        for(auto &c:text){
            mp[c]++;
        }
        for(auto &x:mp){
            char ch=x.first;
            if(ch=='b' || ch=='a' || ch=='n'){
                m=min(m,x.second);
            }
            else if(ch=='o' || ch=='l'){
                m=min(m,x.second/2);
            }
        }
        return m;   
    }
};