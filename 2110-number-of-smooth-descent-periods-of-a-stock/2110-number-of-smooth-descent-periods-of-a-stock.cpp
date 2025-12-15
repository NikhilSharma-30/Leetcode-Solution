class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0,c=1;
        int n=prices.size();
        int i=1;
        while(i<n){
            if((prices[i-1]-prices[i])==1){
                c++;
            }
            else{
                long long val=(c*(c+1))/2;
                ans+=val;
                c=1;
            }
            i++;
        }
        ans+=((c*(c+1))/2);
        return ans;
    }
};