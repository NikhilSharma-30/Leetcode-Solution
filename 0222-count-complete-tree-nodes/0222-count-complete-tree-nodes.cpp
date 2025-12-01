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
    void solve(TreeNode* r,vector<int>&v){
        if(r==NULL) return;
        v.push_back(r->val);
        if(r->left){
            solve(r->left,v);
        }
        if(r->right){
            solve(r->right,v);
        }
        return ;
    }
    int countNodes(TreeNode* root) {
        vector<int>v={};
        solve(root,v);
        return v.size();
    }
};