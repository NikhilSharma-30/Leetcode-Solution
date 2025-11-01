/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int>v,v1;
        ListNode* t=head;
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next;
        }
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            if(v1.empty()){
                v1.push_back(v[i]);
            }
            else{
                if(v[i]>=v1.back()) v1.push_back(v[i]);
            }
        }
        reverse(v1.begin(),v1.end());
        int n1=v1.size(),i=0;
        t=head;
        while(t!=NULL && i<n1){
            t->val=v1[i];
            if(i==(n1-1)){
                t->next=NULL;
                break;
            }
            t=t->next;
            i++;
        }
        return head;
        
        
    }
};