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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val!=val){
                v.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int n=v.size();
        if(n==0) return NULL;
        int i=0;
        while(temp!=NULL){
            temp->val=v[i];
            if(i==(n-1)){
                temp->next=NULL;
                break;
            }
            i++;
            temp=temp->next;
        }
        return head;
        
    }
};