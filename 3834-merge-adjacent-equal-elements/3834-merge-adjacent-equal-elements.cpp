#define ll long long
class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        int n=nums.size();
        stack<ll>st;
        vector<ll>ans;
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top()==nums[i]){
                ll s=1LL*2*nums[i];
                st.pop();
                while(!st.empty() && st.top()==s){
                    s+=st.top();
                    st.pop();
                }
                st.push(s);
            }
            else{
                st.push(nums[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};