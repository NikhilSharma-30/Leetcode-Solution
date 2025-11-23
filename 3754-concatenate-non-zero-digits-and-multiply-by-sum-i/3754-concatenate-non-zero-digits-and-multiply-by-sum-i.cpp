# define ll long long
class Solution {
public:
    long long sumAndMultiply(int n) {
        ll sum=0;
        string s="";
        if(n==0) return 0;
        while(n>0){
            int d=n%10;
            if(d>0){
                char c=d+'0';
                s+=c;
                sum+=d;
            }
            n/=10;
        }
        reverse(s.begin(),s.end());
        return stoll(s)*sum;
        
    }
};