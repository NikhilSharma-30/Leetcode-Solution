class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++){
            set<int>st;
            int currs=0;
            for(int j=i;j<n;j++){
                st.insert(nums[j]);
                currs+=nums[j];
                if(st.find(currs)!=st.end()){
                    c++;
                }
            }
        }
        return c;
    }
};