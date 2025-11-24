class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        int n=nums.size();
        int x=nums[0],ce=0;
        int ml=0;
        vector<int>diff,xr;
        map<pair<int,int>,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ce++;
            }
            diff.push_back(2*ce-(i+1));
        }
        for(int i=0;i<n;i++){
            if(i==0){
                xr.push_back(nums[i]);
            }
            else{
                x^=nums[i];
                xr.push_back(x);
            }
        }
        mp.insert({{0,0},-1});
        for(int i=0;i<n;i++){
            pair<int,int>p={xr[i],diff[i]};
            if(mp.find(p)!=mp.end()){
                int id=mp[p];
                ml=max(ml,i-id);
      
            }
            else{
                mp.insert({p,i});
            }
        }
        return ml;

        
    }
};