class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(),ans=0;
        vector<int>pref;
        vector<int>r(n,0);
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            pref.push_back(s);
        }
        for(int i=0;i<n;i++){
            int rem=pref[i]%k;
            if(rem<0) rem+=k;
            r[i]=rem;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(r[i]==0){
                ans++;
                if(mp.find(r[i])!=mp.end()){
                    ans+=mp[r[i]];
                }
                mp[r[i]]++;
            }
            else if(mp.find(r[i])!=mp.end()){
                ans+=mp[r[i]];
                mp[r[i]]++;
            }
            else{
                mp[r[i]]++;
            }
        }
        return ans;  
    }
};