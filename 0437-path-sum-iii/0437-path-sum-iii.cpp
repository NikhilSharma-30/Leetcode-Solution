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
    void solve(TreeNode* r,long long currs,int t,int &c){
        if(r==NULL){
            return;
        }
        currs+=(r->val);
        if(currs==t){
            c++;
        }
        solve(r->left,currs,t,c);
        solve(r->right,currs,t,c);
        return;
    }
    int pathSum(TreeNode* root, int targetSum) {
        int c=0;
        long long currs=0;
        if(root==NULL) return 0;
        solve(root,0,targetSum,c);
        c+=pathSum(root->left,targetSum);
        c+=pathSum(root->right,targetSum);
        return c;
    }
};