class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int c=numBottles,e=numExchange;
        int ans=numBottles;
        if(c<e) return c; 
        while(c>0){
            if(c<e){
                break;
            }
            c-=e;
            ans++;
            c++;
            e++;
        }
        return ans;
        
        
    }
};