class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto &x:mp){
            if(x.second%k==0){
                sum+=(x.first*x.second);
            }
        }
        return sum;
        
    }
};