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
    priority_queue<int>pq;
    void solve(TreeNode* r,int k){
        if(r==NULL) return;
        if(pq.size()<k){
            pq.push(r->val);
        }
        else if((r->val)<pq.top()){
            pq.pop();
            pq.push(r->val);
        }
        if(r->left){
            solve(r->left,k);
        }
        if(r->right){
            solve(r->right,k);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root->left==NULL && root->right==NULL) return root->val;
        solve(root,k);
        return pq.top();
    }
};