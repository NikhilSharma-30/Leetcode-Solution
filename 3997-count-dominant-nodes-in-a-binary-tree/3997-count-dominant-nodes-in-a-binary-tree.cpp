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
    void findmax(TreeNode *r1,int &m){
        m=max(m,r1->val);
        if(r1->left){
            findmax(r1->left,m);
        }
        if(r1->right){
            findmax(r1->right,m);
        }
        return;
    }
    void solve(TreeNode* r,int &ans){
        if(r->left==NULL && r->right==NULL){
            ans++;
            return;
        }
        int m=INT_MIN;
        findmax(r,m);
        if(r->val==m) ans++;
        if(r->left){
            solve(r->left,ans);
        }
        if(r->right){
            solve(r->right,ans);
        }
        return;

    }
    int countDominantNodes(TreeNode* root) {
        int ans=0;
        solve(root,ans);
        return ans;
    }
};