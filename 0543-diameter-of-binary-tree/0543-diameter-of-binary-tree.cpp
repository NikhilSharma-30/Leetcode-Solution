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
        if(r==NULL){
            return 0;
        }
        else if(r->left!=NULL && r->right!=NULL){
            return 1+max(solve(r->left),solve(r->right));
        }
        else if(r->left!=NULL){
            return 1+solve(r->left);
        }
        else{
            return 1+solve(r->right);
        }
       
    }
    int findmax(TreeNode* root){
        if(root->left==NULL && root->right==NULL) return 0;
        int c1=0,c2=0;
        TreeNode* r=root;
        if(r->left){
            c1+=solve(r->left);
        }
        if(r->right){
            c2+=solve(r->right);
        }
        return (c1+c2); 
    }
    void solve(TreeNode* r,int &m){
        if(r==NULL) return;
        m=max(m,findmax(r));
        if(r->left) solve(r->left,m);
        if(r->right) solve(r->right,m);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 0;
        int m=0;
        solve(root,m);
        return m;
        
    }
};