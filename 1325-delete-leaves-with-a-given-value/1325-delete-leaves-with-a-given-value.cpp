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
    int tar;
    void sum(TreeNode* r,int &s,int &c,int &ct){
        s+=(r->val);
        if(r->val==tar) ct++;
        c++;
        if(r->left){
            sum(r->left,s,c,ct);
        }
        if(r->right){
            sum(r->right,s,c,ct);
        }
        return;
    }
    void solve(TreeNode* r,int t){
        int s1=0,s2=0;
        int c1=0,c2=0;
        int ct1=0,ct2=0;
        if(r->left){
            sum(r->left,s1,c1,ct1);
        }
        if(r->right){
            sum(r->right,s2,c2,ct2);
        }
        if(c1==ct1 && (c1*t)==s1){
            r->left=NULL;
        }
        if(c2==ct2 && (c2*t)==s2){
            r->right=NULL;
        }
        if(r->left){
            solve(r->left,t);
        }
        if(r->right){
            solve(r->right,t);
        }
        return;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        if(root==NULL){
            return NULL;
        }
        tar=target;
        solve(root,target);
        if(root->val==target && root->left==NULL && root->right==NULL) return NULL;
        return root;
    }
};