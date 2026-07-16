class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>mx,prefgcd;
        int m=nums[0];
        mx.push_back(nums[0]);
        for(int i=1;i<n;i++){
            m=max(m,nums[i]);
            mx.push_back(m);
        }
        prefgcd.push_back(nums[0]);
        for(int i=1;i<n;i++){
            prefgcd.push_back(gcd(nums[i],mx[i]));
        }
        sort(prefgcd.begin(),prefgcd.end());
        int i=0,j=prefgcd.size()-1;
        long long ans=0;
        while(i<n && j>=0 && i<j){
            ans+=gcd(prefgcd[i],prefgcd[j]);
            i++;
            j--;
        }
        return ans;    
    }
};