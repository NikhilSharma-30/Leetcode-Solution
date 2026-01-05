class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool>isprime(n+1,true);
        vector<vector<int>>ans;
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<=n;i++){
            if(isprime[i]){
                for(long long j=1LL*i*i;j<=n;j+=i){
                    isprime[j]=false;
                }
            }
        }
        set<int>st;
        for(int i=2;i<=n;i++){
            int y=n-i;
            if(y>1 && y<=n && isprime[i] && isprime[y] && st.find(i)==st.end()){
                ans.push_back({i,y});
                st.insert(i);
                st.insert(y);
            }
        }
        return ans;

    }
};