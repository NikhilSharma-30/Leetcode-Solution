class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                v.push_back(i);
            }
        }
        int n1=v.size();
        for(int i=1;i<n1;i++){
            if((v[i]-v[i-1]-1)<k) return false;
        }
        return true;   
    }
};