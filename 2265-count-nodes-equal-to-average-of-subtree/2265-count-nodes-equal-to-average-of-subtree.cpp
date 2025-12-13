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
    void find(TreeNode* r,int &s,int &c){
        if(r==NULL) return;
        s+=(r->val);
        c++;
        if(r->left){
            find(r->left,s,c);
        }
        if(r->right){
            find(r->right,s,c);
        }
        return;
    }
    void solve(TreeNode* r,bool &f){
        if(r==NULL) return;
        int sl=0,cl=0;
        int sr=0,cr=0;
        if(r->left){
            find(r->left,sl,cl);
        }
        if(r->right){
            find(r->right,sr,cr);
        }
        int avg=(r->val+sl+sr)/(cl+cr+1);
        if(avg==(r->val)){
            f=true;
        }
        return;
    }
    void traverse(TreeNode* r,int &c){
        if(r==NULL) return;
        bool f=false;
        solve(r,f);
        if(f) c++;
        if(r->left){
            traverse(r->left,c);
        }
        if(r->right){
            traverse(r->right,c);
        }
        return;
    }
    int averageOfSubtree(TreeNode* root) {
        int c=0;
        if(root->left==NULL && root->right==NULL) return 1;
        traverse(root,c);
        return c;  
    }
};