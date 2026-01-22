class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        set<int>st;
        for(auto &x:nums){
            if(st.size()==3){
                break;
            }
            st.insert(x);
        }
        vector<int>v;
        for(auto &x:st) v.push_back(x);
        sort(v.begin(),v.end());
        int n1=v.size();
        if(n1<3){
            return v[n1-1]; 
        }
        return v[0];


        
    }
};