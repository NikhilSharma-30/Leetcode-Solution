#define ll long long
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n=happiness.size();
        ll ans=0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        int x=1;
        ans+=happiness[0];
        for(int i=1;i<k;i++){
            if(happiness[i]>0){
                happiness[i]-=x;
            }
            if(happiness[i]>0){
                ans+=happiness[i];
            }
            x++;
        }
        return ans;
    }
};