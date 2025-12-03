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
    int solve(TreeNode* r){
        if(r->left==NULL && r->right==NULL){
            return 0;
        }
        else if(r->left!=NULL && r->right!=NULL){
            return 1+min(solve(r->left),solve(r->right));
        }
        else if(r->left){
            return 1+solve(r->left);
        }
        else{
            return 1+solve(r->right);
        }
    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return 1+solve(root);
        
    }
};