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
    int sum=0;
    void solve(TreeNode* r,int l,int h){
        if(r==NULL) return;
        if(r->val>=l && r->val<=h) sum+=(r->val);
        if(r->left) solve(r->left,l,h);
        if(r->right) solve(r->right,l,h);
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        solve(root,low,high);
        return sum;
    }
};