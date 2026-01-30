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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int>mp;
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL){
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto &x:mp){
            if(x.second==1){
                v.push_back(x.first);
            }
        }
        sort(v.begin(),v.end());
        int n=v.size(),i=0;
        if(n==0) return NULL;
        temp=head;
        while(temp!=NULL){
            temp->val=v[i];
            if(i==(n-1)){
                temp->next=NULL;
                break;
            }
            temp=temp->next;
            i++;
        }
        return head;
    }
};