#define ll long long
class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3!=0) return {};
        vector<ll>v;
        ll x1=(num-3)/9;
        ll x2=(num-6)/9;
        ll x3=(num-9)/9;
        ll s1=(1LL*9*x1)+3;
        ll s2=(1LL*9*x2)+6;
        ll s3=(1LL*9*x3)+9;
        if(s1==num){
            v.push_back(1LL*3*x1);
            v.push_back((1LL*3*x1)+1);
            v.push_back((1LL*3*x1)+2);
        }
        else if(s2==num){
            v.push_back((1LL*3*x2)+1);
            v.push_back((1LL*3*x2)+2);
            v.push_back((1LL*3*x2)+3);
        }
        else{
            v.push_back((1LL*3*x3)+2);
            v.push_back((1LL*3*x3)+3);
            v.push_back((1LL*3*x3)+4);
        }
        return v;
    }
};