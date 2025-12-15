class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size(),ans=0;
        int c=2;
        int i=2;
        if(n<3) return 0;
        while(i<n){
            if((nums[i]-nums[i-1])==(nums[i-1]-nums[i-2])){
                c++;
            }
            else{
                int x=c-2;
                int v=(x*(x+1))/2;
                ans+=v;
                c=2;

            }
            i++;
        }
        int x=c-2;
        int v=(x*(x+1))/2;
        ans+=v;
        return ans;

        
    }
};