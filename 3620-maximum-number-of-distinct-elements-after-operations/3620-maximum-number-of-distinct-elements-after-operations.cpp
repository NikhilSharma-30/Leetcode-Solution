class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[0]-k,c=0;
        set<int>st;
        for(int i=0;i<n;i++){
            int diff=abs(x-nums[i]);
            while(diff>k && x<=nums[i]){
                x++;
                diff=abs(x-nums[i]);
            }
            if(diff>=0 && diff<=k){
                nums[i]=x;
                x++;
            }
        }
        for(auto &i:nums){
            st.insert(i);
        }
        
        return st.size();
        
        
    }
};