class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int rem=numBottles;
        int c=numExchange;
        int sum=rem,ce=rem;
        while(ce>=numExchange){
            sum+=(ce/c);
            ce=(ce/c)+(ce%c);
        }
        return sum;
        
    }
};