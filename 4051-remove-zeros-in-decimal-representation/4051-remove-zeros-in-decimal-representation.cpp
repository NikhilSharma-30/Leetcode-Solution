class Solution {
public:
    long long removeZeros(long long n) {
        string s="";
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                s+=to_string(rem);
            }
            n/=10;
        }
        reverse(s.begin(),s.end());
        return stoll(s);     
    }
};