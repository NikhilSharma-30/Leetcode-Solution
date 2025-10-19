class Solution {
public:
    int ce=0;
    int longestBalanced(vector<int>& nums) {
        int n=nums.size(),ma=0;
        for(int i=0;i<n;i++){
            set<int>st,st1;
            for(int j=i;j<n;j++){
                int l=j-i+1;
                if(nums[j]%2==0){
                    st.insert(nums[j]);
                }
                else{
                    st1.insert(nums[j]);
                }
                if(st.size()==st1.size()){
                    ma=max(ma,l);
                }
            }
        }
        return ma;

    }
};