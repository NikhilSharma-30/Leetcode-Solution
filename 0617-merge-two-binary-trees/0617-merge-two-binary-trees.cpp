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
    void solve(TreeNode* &r1,TreeNode* &r2){
        if(r1==NULL && r2==NULL) return;
        if(r1!=NULL && r2!=NULL){
            r1->val+=(r2->val);
        }
        if(r1==NULL && r2!=NULL){
            r1=r2;
            return;
        }
        if(r1!=NULL && r2==NULL){
            return;
        }
        solve(r1->left,r2->left);
        solve(r1->right,r2->right);
        return;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        solve(root1,root2);
        return root1;   
    }
};