class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size(),x=1;
        set<int>st;
        int ma=*max_element(nums.begin(),nums.end());
        for(auto &i:nums){
            st.insert(i);
        }
        while((k*x)<=ma){
            if(st.find(k*x)==st.end()){
                return k*x;
            }
            x++;
        }
        return (k*x);
        
    }
};