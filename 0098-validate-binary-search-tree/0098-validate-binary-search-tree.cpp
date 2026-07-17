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
 # define ll long long
class Solution {
public:
    void check(TreeNode* r,ll mi,ll ma,bool &f){
        int data=r->val;
        if(data<=mi || data>=ma){
            f=false;
            return;
        }
        if(r->left){
            check(r->left,mi,data,f);
        }
        if(r->right){
            check(r->right,data,ma,f);
        }
        return;
    }
    bool isValidBST(TreeNode* root) {
        bool f=true;
        ll mi=LLONG_MIN,ma=LLONG_MAX;
        if(root->left==NULL && root->right==NULL) return true;
        check(root,mi,ma,f);
        return f;
        
    }
};
