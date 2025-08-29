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
    void solve(TreeNode* r,int currs,int t,vector<int>v,vector<vector<int>>&ans){
        int val=r->val;
        if(r->left==NULL && r->right==NULL){
            if((currs+val)==t){
                v.push_back(val);
                ans.push_back(v);
            }
            return;
        }
        v.push_back(r->val);
        currs+=(r->val);
        if(r->left){
            solve(r->left,currs,t,v,ans);
        }
        if(r->right){
            solve(r->right,currs,t,v,ans);
        }
        currs-=(r->val);
        v.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int t=targetSum,currs=0;
        if(root==NULL) return {};
        vector<vector<int>>ans;
        vector<int>v={};
        solve(root,currs,t,v,ans);
        return ans;
    }
};