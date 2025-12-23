class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        if(n==1){
            if(nums[0]==target){
                return {0,0};
            }
            return {-1,-1};
        }
        vector<int>ans;
        auto it1=lower_bound(nums.begin(),nums.end(),target);
        int id1=it1-nums.begin();
        auto it2=upper_bound(nums.begin(),nums.end(),target);
        int id2=it2-nums.begin();
        if(id1==n){
            ans.push_back(-1);
        }
        else{
            if(nums[id1]==target){
                ans.push_back(id1);
            }
            else{
                ans.push_back(-1);
            }
        }
        if(id2==n){
            if(nums[n-1]==target){
                ans.push_back(n-1);
            }
            else{
                ans.push_back(-1);
            }
        }
        else{
            if(id2<n && (id2-1)>=0 && nums[id2-1]==target){
                ans.push_back(id2-1);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
        
    }
};