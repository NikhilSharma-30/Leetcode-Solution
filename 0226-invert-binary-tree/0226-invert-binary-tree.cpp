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
    void solve(TreeNode* r){
        if(r==NULL) return;
        if(r->left){
            solve(r->left);
        }
        if(r->right){
            solve(r->right);
        }
        TreeNode *t=r->left;
        r->left=r->right;
        r->right=t;
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        solve(root);
        return root;  
    }
};