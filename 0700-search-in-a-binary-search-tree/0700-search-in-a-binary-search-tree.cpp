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
    TreeNode* ans=NULL;
    void solve(TreeNode* r,int v){
        if(r==NULL) return;
        if(r->val==v){
            ans=r;
            return;
        }
        if((r->val)>v){
            solve(r->left,v);
        }
        else{
            solve(r->right,v);
        }
        return;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        solve(root,val);
        return ans;
    }
};