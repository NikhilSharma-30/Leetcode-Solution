class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n=nums.size(),c=0;
        sort(nums.begin(),nums.end());
        for(auto &i:nums){
            auto it=upper_bound(nums.begin(),nums.end(),i);
            int id=it-nums.begin();
            int x=n-id;
            if(x>=k) c++;
        }    
        return c; 
    }
};