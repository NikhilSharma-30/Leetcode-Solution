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
    void find(TreeNode* r,int ra,int &m){
        m=max(m,abs(ra-(r->val)));
        if(r->left){
            find(r->left,ra,m);
        }
        if(r->right){
            find(r->right,ra,m);
        }
        return;
    }
    void solve(TreeNode* r,int &m){
        find(r,r->val,m);
        if(r->left){
            solve(r->left,m);
        }
        if(r->right){
            solve(r->right,m);
        }
        return;
    }
    int maxAncestorDiff(TreeNode* root) {
        int m=0;
        solve(root,m);
        return m;
        
    }
};