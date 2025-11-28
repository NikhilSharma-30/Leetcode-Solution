# define ll long long
class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA,vector<int>& energyDrinkB){
        int n=energyDrinkA.size();
        vector<ll>dp1(n,0),dp2(n,0);
        dp1[0]=1LL*energyDrinkA[0];
        dp1[1]=1LL*(energyDrinkA[0]+energyDrinkA[1]);
        dp2[0]=1LL*energyDrinkB[0];
        dp2[1]=1LL*(energyDrinkB[0]+energyDrinkB[1]);
        for(int i=2;i<n;i++){
            dp1[i]=max(dp1[i-1]+energyDrinkA[i],dp2[i-2]+energyDrinkA[i]);
            dp2[i]=max(dp2[i-1]+energyDrinkB[i],dp1[i-2]+energyDrinkB[i]);
        }
        return 1LL*max(dp1[n-1],dp2[n-1]);                              
    }
};