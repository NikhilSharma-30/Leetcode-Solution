class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int pos=0,c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                swap(nums[pos],nums[i]);
                c++;
                pos++;
            }
        }
        return c;
        
    }
};