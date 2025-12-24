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
    void solve(TreeNode* r,TreeNode *p,vector<TreeNode*>v,vector<TreeNode*>&v1){
        if(r==NULL) return;
        if(r==p){
            v.push_back(r);
            v1=v;
            return;
        }
        v.push_back(r);
        if(r->left){
            solve(r->left,p,v,v1);
        }
        if(r->right){
            solve(r->right,p,v,v1);
        }
        return;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>v1,v2,v3,v4;
        solve(root,p,v1,v3);
        solve(root,q,v2,v4);
        int m=min(v3.size(),v4.size());
        for(int i=m-1;i>=0;i--){
            if(v3[i]==v4[i]) return v3[i];
        }
        return NULL;
    }
};