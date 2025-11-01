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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n=nums.size();
        set<int>st;
        for(auto &x:nums){
            st.insert(x);
        }
        vector<int>v;
        ListNode *temp=head;
        bool f=false;
        while(temp!=NULL){
            if(st.find(temp->val)==st.end()) v.push_back(temp->val);
            if(st.find(temp->val)!=st.end()) f=true;
            temp=temp->next;
        }
        if(!f) return head;
        temp=head;
        int n1=v.size(),i=0;
        while(i<n1){
            temp->val=v[i];
            if(i==(n1-1)) temp->next=NULL;
            temp=temp->next;
            i++;
        }
        return head;
    }
};