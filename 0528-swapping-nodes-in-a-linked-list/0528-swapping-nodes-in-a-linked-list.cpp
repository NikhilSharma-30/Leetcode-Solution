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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fk,*lk,*temp=head;
        int i=1,n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int l=n-k+1;
        temp=head;
        while(i<=n && temp!=NULL){
            if(i==k){
                fk=temp;
            }
            if(i==l){
                lk=temp;
            }
            temp=temp->next;
            i++;
        }
        int v=fk->val;
        fk->val=lk->val;
        lk->val=v;
        return head;
    }
};