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
    int find(TreeNode* r){
        if(r->left==NULL && r->right==NULL){
            return 1;
        }
        else if(r->left!=NULL && r->right==NULL){
            return 1+find(r->left);
        }
        else if(r->left==NULL && r->right!=NULL){
            return 1+find(r->right);
        }
        else{
            return 1+max(find(r->left),find(r->right));
        }
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int maxl=0,maxr=0;
        if(root->left){
            maxl=find(root->left);
        }
        if(root->right){
            maxr=find(root->right);
        }
        if(abs(maxl-maxr)>1) return false;
        bool f1=isBalanced(root->left);
        bool f2=isBalanced(root->right);

        return (f1&f2);     
    }
};