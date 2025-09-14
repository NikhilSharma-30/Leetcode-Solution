class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        set<int>st;
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=0;i--){
            if(st.size()<k){
                st.insert(nums[i]);
            }
        }
        for(auto &x:st){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());
        return v;
    }
};