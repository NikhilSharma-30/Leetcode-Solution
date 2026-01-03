class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(),c=1,m=1;
        if(n==0) return {};
        set<int>st;
        vector<int>nums1;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto &x:st){
            nums1.push_back(x);
        }
        sort(nums1.begin(),nums1.end());
        int n1=nums1.size();
        for(int i=1;i<n1;i++){
            if((abs(nums1[i]-nums1[i-1]))!=1){
                m=max(m,c);
                c=1;
            }
            else{
                c++;
            }
        }
        m=max(m,c);
        return m;
        
    }
};