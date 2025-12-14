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
    void solve(TreeNode* r,vector<string>&ans,vector<TreeNode*>v){
        if(r==NULL) return;
        if(r->left==NULL && r->right==NULL){
            string s="";
            for(auto &x:v){
                s+=to_string(x->val);
                s+="->";
            }
            s+=to_string(r->val);
            ans.push_back(s);
            return;
        }
        v.push_back(r);
        if(r->left){
            solve(r->left,ans,v);
        }
        if(r->right){
            solve(r->right,ans,v);
        }
        v.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        vector<TreeNode*>v;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(to_string(root->val));
            return ans;
        }
        solve(root,ans,v);
        return ans;

        
    }
};