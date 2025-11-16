class Solution {
public:
    int numSub(string s) {
        int n=s.size(),i=1,c=0,ans=0;
        long long m=1e9+7;
        if(n==1){
            if(s[0]=='1') return 1;
            return 0;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
            }
            else{
                if(c%2==0){
                    long long d=(1LL*(c/2)*(c+1));
                    ans+=(d%m);
                }
                else{
                    long long d=(1LL*((c+1)/2)*c);
                    ans+=(d%m);
                }
                c=0;
            }
        }
        if(c>=1){
            if(c%2==0){
                long long d=(1LL*(c/2)*(c+1));
                ans+=(d%m);
            }
            else{
                long long d=(1LL*((c+1)/2)*c);
                ans+=(d%m);
            }
        }
        return ans%m;
    }
};