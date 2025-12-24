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
    void solve(TreeNode* r,string &s){
        if(r==NULL) return;
        s+=to_string(r->val);
        if(r->left){
            s+='(';
            solve(r->left,s);
            s+=')';
        }
        if(r->right){
            if(r->left){
                s+='(';
                solve(r->right,s);
                s+=')';
            }
            else{
               s+="()";
               s+='(';
               solve(r->right,s);
               s+=')'; 
            }
        }
        return;
    }
    string tree2str(TreeNode* root) {
        string s="";
        solve(root,s);
        return s; 
    }
};