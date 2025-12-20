class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        int val=0;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int n=s.size();
        int c=0;
        bool f=false;
        for(int i=0;i<n-1;i++){
            char c1=s[i],c2=s[i+1];
            if(mp[c1]<mp[c2]){
                val+=(mp[c2]-mp[c1]);
                if(i==(n-2)){
                    f=true;
                }
                i++;
            }
            else{
                val+=mp[c1];
            }
        }
        if(!f) val+=mp[s[n-1]];
        return val;
    }
};