# define ll long long
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        ll ans=s;
        n--;
        if(n%2==0) n--;
        ans+=(1LL*(n+1)/2)*m*1LL;
        ans-=(n/2);
        return ans;
        
    }
};