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
        if(r->left==NULL && r->right==NULL) return;
        if(r->left){
            solve(r->left);
        }
        if(r->right){
            solve(r->right);
        }
        TreeNode* t=r->right;
        r->right=r->left;
        TreeNode* temp=r;
        while(temp->right!=NULL){
            temp=temp->right;
        }
        temp->right=t;
        r->left=NULL;
        return;
    }
    void flatten(TreeNode* root) {
        solve(root);
    }
};