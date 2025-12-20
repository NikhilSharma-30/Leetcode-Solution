class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(n==2 && nums[0]==nums[1]) return 1;
        if(n==2 && nums[0]!=nums[1]) return 0;
        set<int>st1;
        for(auto &x:nums){
            st1.insert(x);
        }
        if(st1.size()==n) return 0;
        set<int>st;
        int id=-1,co=0;
        for(int i=n-1;i>=0;i--){
            int x=n-i;
            st.insert(nums[i]);
            if(st.size()==x){
                id=i;
                co=x;
            }
        }
        int c=n-co;
        int ans=ceil(c/3.0);
        return ans;
        
    }
};