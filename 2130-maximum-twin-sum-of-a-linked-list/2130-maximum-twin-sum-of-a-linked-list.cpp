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
    ListNode* reverse(ListNode* temp){
        ListNode *p=NULL,*c=temp;
        while(c!=NULL){
            ListNode *n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    int pairSum(ListNode* head) {
        int ans=INT_MIN;
        ListNode *t=head;
        int l=0;
        while(t!=NULL){
            l++;
            t=t->next;
        }
        int c=0;
        t=head;
        while(c!=(l/2)){
            t=t->next;
            c++;
        }
        ListNode *m=reverse(t);
        t=head;
        while(m!=NULL){
            ans=max(ans,t->val+m->val);
            m=m->next;
            t=t->next;
        }
        return ans;







        
    }
};