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
    void solve(TreeNode *r,int m,int &c){
        if(r==NULL) return;
        int v=r->val;
        m=max(m,v);
        if(m==v){
            c++;
        }
        if(r->left){
            solve(r->left,m,c);
        }
        if(r->right){
            solve(r->right,m,c);
        }
    }
    int goodNodes(TreeNode* root) {
        int c=0,m=INT_MIN;
        solve(root,m,c);
        return c;
        
    }
};