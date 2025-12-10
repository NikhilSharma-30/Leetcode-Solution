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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int n1=n;
            double s=0;
            TreeNode* curr=q.front();
            while(curr!=NULL && n--){
                curr=q.front();
                s+=(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                q.pop();
            }
            double x=s/n1;
            ans.push_back(x);
        }
        return ans;
        
    }
};