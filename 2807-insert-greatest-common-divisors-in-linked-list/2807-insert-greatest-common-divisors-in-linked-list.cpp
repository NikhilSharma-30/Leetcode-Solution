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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp->next!=NULL){
            ListNode* n=temp->next;
            int h=gcd(temp->val,n->val);
            ListNode* nw=new ListNode(h);
            temp->next=nw;
            nw->next=n;
            temp=(temp->next)->next;
        }
        return head;

        
    }
};