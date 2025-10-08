class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size(),m=potions.size();
        vector<int>ans(n,0);
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++){
            long long val=(success/(double)spells[i]);
             if(success%spells[i]==0){
                val=val;
            }
            else{
                val++;
            }
            auto it=lower_bound(potions.begin(),potions.end(),val);
            int id=it-potions.begin();
            if(it!=potions.end() && *it>=val){
                ans[i]=m-id;
            }
        }
        return ans;
    }
};