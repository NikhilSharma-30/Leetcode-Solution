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
    void solve(TreeNode* rl,TreeNode* rr,bool &f){
        if(!rl && !rr) return;
        if(rl && !rr){
            f=false;
            return;
        }
        if(!rl && rr){
            f=false;
            return;
        }
        if((rl->val)!=(rr->val)){
            f=false;
            return;
        }
        solve(rl->left,rr->right,f);
        solve(rl->right,rr->left,f);
        return;
    }
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return true;
        bool f=true;
        solve(root->left,root->right,f);
        return f;
        
    }
};