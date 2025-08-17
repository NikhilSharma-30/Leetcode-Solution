class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n=prices.size();
        long long maxp=LLONG_MIN;
        long long original=0;
        for(int i=0;i<n;i++){
            original+=(prices[i]*strategy[i]);
        }
        vector<long long>priceones(n,0),profits(n,0);
        priceones[0]=prices[0],profits[0]=prices[0]*strategy[0];
        for(int i=1;i<n;i++){
            priceones[i]=priceones[i-1]+prices[i];
            profits[i]=profits[i-1]+(prices[i]*strategy[i]);
        }
        for(int i=0;i<(n-k+1);i++){
            long long profit=0;
            if(i==0){
                profit=(priceones[k-1]-priceones[(k/2)-1])+(profits[n-1]-profits[k-1]);

            }
            else if(i==(n-k)){
                profit=((priceones[n-1]-priceones[n-(k/2)-1])+profits[n-k-1]);
            }
            else{
                profit=profits[i-1]+(priceones[i+k-1]-priceones[i+(k/2)-1])+(profits[n-1]-profits[i+k-1]);
            }
            maxp=max(maxp,profit);
        }
        return max(original,maxp);
        
    }
};