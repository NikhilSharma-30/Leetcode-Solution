/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* r,unordered_map<int,int>&mp){
        mp[r->val]++;
        if(r->left){
            solve(r->left,mp);
        }
        if(r->right){
            solve(r->right,mp);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>ans;
        unordered_map<int,int>mp;
        solve(root,mp);
        int m=0;
        for(auto &x:mp){
            m=max(m,x.second);
        }
        for(auto &x:mp){
            if(x.second==m) ans.push_back(x.first);
        }
        return ans;
        
    }
};