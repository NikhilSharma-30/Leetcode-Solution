#define ll long long
class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        for(int i=1;i<730;i++){
            ll s=0;
            while(n>0){
                int d=n%10;
                s+=(1LL*d*d);
                n/=10;
            }
            st.insert(s);
            n=s;
        }
        if(st.find(1)!=st.end()) return true;
        return false;
    }
};