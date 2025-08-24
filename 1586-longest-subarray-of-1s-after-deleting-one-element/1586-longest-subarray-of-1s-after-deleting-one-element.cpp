class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==0) v.push_back(i);
        }
        if(v.size()==0 || v.size()==1) return (n-1);
        int vn=v.size();
        int m=0;
        for(int i=1;i<(v.size()-1);i++){
            m=max(m,((v[i]-v[i-1])+(v[i+1]-v[i])-2));
        }
        m=max(m,v[0]+(v[1]-v[0]-1));
        m=max(m,(v[vn-1]-v[vn-2]-1)+(n-1-v[vn-1]));
        return m;
    }
};