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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=NULL){
            int s=0;
            while(temp->next!=NULL){
                s+=temp->val;
                temp=temp->next;
                if(temp->val==0) break;
            }
            v.push_back(s);
            temp=temp->next;
        }
        int n=v.size(),i=0;
        temp=head;
        while(i<n){
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