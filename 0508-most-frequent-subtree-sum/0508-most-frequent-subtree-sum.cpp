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
    void findsum(TreeNode* r,int &s){
        s+=(r->val);
        if(r->left){
            findsum(r->left,s);
        }
        if(r->right){
            findsum(r->right,s);
        }
        return;
    }
    void traverse(TreeNode *r,unordered_map<int,int>&mp){
        int s=0;
        findsum(r,s);
        mp[s]++;
        if(r->left){
            traverse(r->left,mp);
        }
        if(r->right){
            traverse(r->right,mp);
        }
        return;
    }

    vector<int> findFrequentTreeSum(TreeNode* root) {
        int m=0;
        unordered_map<int,int>mp;
        vector<int>ans;
        traverse(root,mp);
        for(auto &x:mp){
            m=max(m,x.second);
        }
        for(auto &x:mp){
            if(x.second==m) ans.push_back(x.first);
        }
        return ans;
        
    }
};