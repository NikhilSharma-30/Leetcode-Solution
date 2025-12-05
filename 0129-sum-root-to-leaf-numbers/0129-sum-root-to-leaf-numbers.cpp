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
    void solve(TreeNode* r,int num,int &sum){
        if(r==NULL) return;
        num=num*10+(r->val);
        if(r->left==NULL && r->right==NULL){
            sum+=num;
        }
        if(r->left) solve(r->left,num,sum);
        if(r->right) solve(r->right,num,sum);
        return;
    }
    int sumNumbers(TreeNode* root) {
        int sum=0,num=0; 
        solve(root,num,sum);
        return sum; 
    }
};