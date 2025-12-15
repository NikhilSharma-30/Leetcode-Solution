class Solution {
public:
    void solve(int j,vector<int>curr,vector<int>&nums,vector<vector<int>>&ans,vector<int>&vis){
        if(curr.size()>nums.size()) return;
        curr.push_back(nums[j]);
        vis[j]=1;
        if(curr.size()==nums.size()){
            ans.push_back(curr);
        }
        for(int i=0;i<nums.size();i++){
            if(i!=j && vis[i]==0){
                solve(i,curr,nums,ans,vis);
            }
        }
        vis[j]=0;
        curr.pop_back();
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>curr={};
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            solve(i,curr,nums,ans,vis);
        }
        return ans;



        
    }
};