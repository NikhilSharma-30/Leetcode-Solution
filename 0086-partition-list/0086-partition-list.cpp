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
    ListNode* partition(ListNode* head, int x) {
        vector<int>v1,v2;
        ListNode* temp=head;
        while(temp!=NULL){
            if((temp->val)<x){
                v1.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if((temp->val)>=x){
                v2.push_back(temp->val);
            }
            temp=temp->next;
        }
        temp=head;
        int n1=v1.size(),n2=v2.size();
        int i=0;
        while(i<n1){
            temp->val=v1[i];
            i++;
            temp=temp->next;
        }
        i=0;
        while(i<n2){
            temp->val=v2[i];
            if(i==(n2-1)){
                temp->next=NULL;
                break;
            }
            i++;
            temp=temp->next;
        }
        return head;

        
    }
};