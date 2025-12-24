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
    void traverse(TreeNode* r,unordered_map<string,int>&mp,vector<TreeNode*>&v){
        if(r==NULL) return;
        string s="";
        solve(r,s);
        if(mp.find(s)!=mp.end() && mp[s]==1){
            v.push_back(r);
        }
        mp[s]++;
        if(r->left){
            traverse(r->left,mp,v);
        }
        if(r->right){
            traverse(r->right,mp,v);
        }
        return;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int>mp;
        vector<TreeNode*>v;
        traverse(root,mp,v);
        return v; 
    }
};