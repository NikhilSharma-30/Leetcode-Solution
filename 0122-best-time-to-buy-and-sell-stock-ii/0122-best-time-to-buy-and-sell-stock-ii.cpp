class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size();
        int i=1;
        if(is_sorted(prices.begin(),prices.end())) return prices[n-1]-prices[0];
        while(i<n){
            if(prices[i-1]<prices[i]){
                ans+=(prices[i]-prices[i-1]);
            }
            i++;
        }
        return ans;
        
    }
};