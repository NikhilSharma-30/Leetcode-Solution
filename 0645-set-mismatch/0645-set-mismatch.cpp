class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        set<int>st;
        sort(nums.begin(),nums.end());
        st.insert(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                ans.push_back(nums[i]);
            }
            st.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
                break;
            }
        }
        return ans;
        
    }
};