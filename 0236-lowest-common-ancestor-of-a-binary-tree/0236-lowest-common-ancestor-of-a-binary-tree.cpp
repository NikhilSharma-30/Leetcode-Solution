/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void find(TreeNode* r,TreeNode*p,bool &f){
        if(r==NULL) return;
        if(r==p){
            f=true;
            return;
        }
        if(r->left){
            find(r->left,p,f);
        }
        if(r->right){
            find(r->right,p,f);
        }
        return;
    }

    void solve(TreeNode* r,TreeNode*p,TreeNode* q,TreeNode* &ans){
        if(r==NULL) return;
        bool f1=false,f2=false;
        find(r,p,f1);
        find(r,q,f2);
        if(f1 && f2){
            ans=r;
        }
        if(r->left){
            solve(r->left,p,q,ans);
        }
        if(r->right){
            solve(r->right,p,q,ans);
        }
        return;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans;
        solve(root,p,q,ans);
        return ans;
        
    }
};