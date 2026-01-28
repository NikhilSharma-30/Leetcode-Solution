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
    void sum(TreeNode*r ,int &s){
        s+=(r->val);
        if(r->left){
            sum(r->left,s);
        }
        if(r->right){
            sum(r->right,s);
        }
        return;
    }
    void solve(TreeNode* r){
        int s1=0,s2=0;
        if(r->left){
            sum(r->left,s1);
        }
        if(r->right){
            sum(r->right,s2);
        }
        if(s1==0){
            r->left=NULL;
        }
        if(s2==0){
            r->right=NULL;
        }
        if(r->left){
            solve(r->left);
        }
        if(r->right){
            solve(r->right);
        }
        return;
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(root==NULL) return root;
        solve(root);
        if(root->val==0 && root->left==NULL && root->right==NULL) return NULL;
        return root;

    }
};