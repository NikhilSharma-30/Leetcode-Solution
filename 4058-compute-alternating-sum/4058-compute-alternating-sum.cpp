class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();
        if(n==2) return (nums[0]-nums[1]);
        int s0=0,s1=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                s0+=nums[i];
            }
            else{
                s1+=nums[i];
            }
        }
        return s0-s1;
    }
};