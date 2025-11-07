class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size(),c=1,l=1;
        for(int i=0;i<n;i++){
            c=1;
            int j=i+1;
            while(j<n && nums[j-1]<nums[j]){
                c++;
                j++;
            }
            l=max(l,c);
        }
        l=max(l,c);
        return l;
    }
};