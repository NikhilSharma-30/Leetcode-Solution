class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        int ma=INT_MIN;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int l=j-i+1;
                set<int>st;
                for(int m=i;m<=j;m++){
                    if(l==k && st.find(nums[m])==st.end()){
                        mp[nums[m]]++;
                        st.insert(nums[m]);
                    }
                }
            }
        }
        for(auto &x:mp){
            if(x.second==1) ma=max(ma,x.first);
        }
        if(ma==INT_MIN) return -1;
        return ma;
    }
};