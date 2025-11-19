class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        set<int>st;
        for(auto &i:nums){
            st.insert(i);
        }
        int x=original;
        while(st.find(x)!=st.end()){
            x*=2;
        }
        return x;
    }
};