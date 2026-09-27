class Solution {
public:
    bool check(map<int,int>mp){
        int s=0;
        for(auto &x:mp){
            s+=(x.second);
        }
        if(s==0) return true;
        return false;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;
        for(auto &x:nums){
            mp[x]++;
        }
        while(!check(mp)){
            for(auto &x:mp){
                if((x.second)>0){
                    ans.push_back(x.first);
                    x.second=x.second-1;
                }
            }
        }
        return ans;
        
        
    }
};