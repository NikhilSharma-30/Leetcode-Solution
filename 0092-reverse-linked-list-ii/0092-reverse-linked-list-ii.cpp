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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        long long l=0;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *temp=head;
        while(temp!=NULL){
            temp=temp->next;
            l++;
        }
        l++;
        if(l==2 || left==right) return head;
        ListNode *newhead,*leftp,*rightn;
        temp=dummy;
        int pos=0;
        while(pos<left){
            temp=temp->next;
            pos++;
        }
        newhead=temp;
        temp=dummy;
        pos=0;
        while(pos<(left-1)){
            temp=temp->next;
            pos++;
        }
        leftp=temp;
        temp=dummy;
        pos=0;
        while(pos<(right+1) && temp!=NULL){
            temp=temp->next;
            pos++;
        }
        rightn=temp;
        ListNode *p=NULL,*c=newhead;
        int count=(right-left)+1;
        while(count>0){
            ListNode* n=c->next;
            c->next=p;
            p=c;
            c=n;
            count--;
        }
        leftp->next=p;
        newhead->next=rightn;
        if(left==1) return p;
        if(left==1 && right==l) return p;
        return head;
        
    }
};