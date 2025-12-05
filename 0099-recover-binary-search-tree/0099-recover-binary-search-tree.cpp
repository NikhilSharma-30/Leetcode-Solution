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
    void solve(TreeNode* r,vector<pair<int,TreeNode*>>&v){
        if(r==NULL) return;
        if(r->left){
            solve(r->left,v);
        }
        v.push_back({r->val,r});
        if(r->right){
            solve(r->right,v);
        }
        return;
    }
    void recoverTree(TreeNode* root){
        vector<pair<int,TreeNode*>>v;
        vector<int>v1;
        solve(root,v);
        for(auto &x:v){
            v1.push_back(x.first);
        }
        sort(v1.begin(),v1.end());
        int n=v.size();
        int x1,x2;
        TreeNode *r1,*r2;
        for(int i=0;i<n;i++){
            if(v1[i]!=v[i].first){
                r1=v[i].second;
                x1=v[i].first;
                x2=v1[i];
            }
        }
        for(int i=0;i<n;i++){
            if(v[i].first==x2){
                r2=v[i].second;
            }
        }
        r1->val=x2;
        r2->val=x1;
    }
};