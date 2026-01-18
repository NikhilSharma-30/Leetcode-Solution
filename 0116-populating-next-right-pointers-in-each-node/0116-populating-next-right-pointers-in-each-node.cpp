/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL) return NULL;
        vector<vector<Node*>>v;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node* curr=q.front();
            vector<Node*>v1;
            while(curr!=NULL && n--){
                curr=q.front();
                v1.push_back(curr);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                q.pop();
            }

            v.push_back(v1);
        }
        for(auto &x:v){
            vector<Node*>v2=x;
            int n1=v2.size();
            for(int i=1;i<n1;i++){
                v2[i-1]->next=v2[i];
            }
        }
        return root;    
    }
};