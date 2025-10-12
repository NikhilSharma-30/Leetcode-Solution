class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0,c=2;
        for(int i=2;i<n;i++){
            if((nums[i-1]+nums[i-2])==nums[i]){
                c++;
            }
            else{
                l=max(l,c);
                c=2;
            }
        }
        l=max(l,c);
        return l;

        
    }
};