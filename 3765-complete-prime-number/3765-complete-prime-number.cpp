#define ll long long
class Solution {
public:
    bool solve(string s){
        ll x=stoll(s);
        if(x==1) return false;
        if(x==2 || x==3) return true;
        for(ll i=2;i<=(x/2);i++){
            if(x%i==0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string s=to_string(num);
        int n=s.size();
        string st="";
        for(int i=0;i<n;i++){
            st+=s[i];
            if(!solve(st)) return false;
        }
        st="";
        for(int i=0;i<n;i++){
            st+=s[i];
            if(!solve(st)) return false;
        }
        for(int i=0;i<n;i++){
            string st1=s.substr(i,n-i);
            if(!solve(st1)) return false;
        }
        return true;
        
    }
};