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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp=head;
        vector<int>v,ans;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        vector<int>v1;
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                v1.push_back(i);
            }
            else if(v[i]<v[i-1] && v[i]<v[i+1]){
                v1.push_back(i);
            }
        }
        int n1=v1.size();
        if(v1.size()<2){
            return {-1,-1};
        }
        int ma=v1[n1-1]-v1[0];
        int mi=INT_MAX;
        for(int j=1;j<n1;j++){
            mi=min(mi,v1[j]-v1[j-1]);
        }
        ans.push_back(mi);
        ans.push_back(ma);
        return ans;



        
    }
};