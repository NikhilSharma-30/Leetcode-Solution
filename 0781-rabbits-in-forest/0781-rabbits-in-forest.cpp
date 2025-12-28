class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int ans=0;
        unordered_map<int,int>mp;
        for(auto &i:answers){
            if(i==0){
                ans++;
            }
            else{
                mp[i]++;
            } 
        }
        for(auto &x:mp){
            int p=x.first+1;
            int val=ceil(x.second/(1.0*p));
            ans+=(val*p);
            
        }
        return ans;
        
    }
};