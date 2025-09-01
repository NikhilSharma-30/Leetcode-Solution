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
    void solve(TreeNode* p,TreeNode* q,bool &f){
        if(p==NULL && q==NULL) return;
        if(p==NULL && q!=NULL){
            f=false;
            return;
        }
        if(p!=NULL && q==NULL){
            f=false;
            return;
        }
        if(p->val!=q->val){
            f=false;
            return;
        }
        solve(p->left,q->left,f);
        solve(p->right,q->right,f);
        return;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool f=true;
        solve(p,q,f);
        return f;
        
    }
};