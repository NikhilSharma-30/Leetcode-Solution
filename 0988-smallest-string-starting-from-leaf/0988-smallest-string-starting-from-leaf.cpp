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
    void solve(TreeNode* r,string s,string &ans){
        if(r==NULL) return;
        char c='a'+(r->val);
        s+=c;
        if(r->left==NULL && r->right==NULL){
            reverse(s.begin(),s.end());
            if(ans==""){
                ans=s;
            }
            else{
                if(s<ans){
                    ans=s;
                }
            }
        }
        if(r->left) solve(r->left,s,ans);
        if(r->right) solve(r->right,s,ans);
    }
    string smallestFromLeaf(TreeNode* root) {
        string s="",ans="";
        solve(root,s,ans);
        return ans;
        
    }
};