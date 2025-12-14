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
    int find(TreeNode* r){
        if(r==NULL){
            return 0;
        }
        else if(r->left!=NULL && r->right==NULL){
            return 1+find(r->left);
        }
        else if(r->left==NULL && r->right!=NULL){
            return 1+find(r->right);
        }
        else{
            return 1+max(find(r->left),find(r->right));
        }
    }
    void solve(TreeNode* r,int &sum,int d,int c){
        if(r==NULL) return;
        c++;
        if(r->left==NULL && r->right==NULL && c==d){
            sum+=(r->val);
            return;
        }
        if(r->left){
            solve(r->left,sum,d,c);
        }
        if(r->right){
            solve(r->right,sum,d,c);
        }
        return;

    }
    int deepestLeavesSum(TreeNode* root) {
        int d=find(root);
        int sum=0,c=0;
        solve(root,sum,d,c);
        return sum;
        
    }
};