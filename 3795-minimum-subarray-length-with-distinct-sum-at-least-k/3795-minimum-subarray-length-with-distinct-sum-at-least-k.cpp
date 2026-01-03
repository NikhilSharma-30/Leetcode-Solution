class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int,int>mp;
        int sum=0;
        int m=INT_MAX;
        if(n==1){
            if(nums[0]>=k) return 1;
            return -1;
        }
        for(int p=0;p<n;p++){
            if(nums[p]>=k) return 1;
        }
        while(j<n){
            while(sum>=k){
                if(mp.find(nums[i])!=mp.end() && mp[nums[i]]>1){
                    mp[nums[i]]--;
                }
                else{
                    sum-=nums[i];
                    mp.erase(nums[i]);
                }
                m=min(m,j-i);
                i++;
            }
            if(mp.find(nums[j])!=mp.end() && mp[nums[j]]>=1){
                mp[nums[j]]++;
            }
            else{
                sum+=nums[j];
                mp[nums[j]]=1;
            }
            j++;
        }
        while(sum>=k){
                if(mp.find(nums[i])!=mp.end() && mp[nums[i]]>1){
                    mp[nums[i]]--;
                }
                else{
                    sum-=nums[i];
                    mp.erase(nums[i]);
                }
                m=min(m,j-i);
                i++;
        }
        if(m==INT_MAX) return -1;
        return m;

        
    }
};