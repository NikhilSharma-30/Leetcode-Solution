class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),currs=0;
        int s=accumulate(nums.begin(),nums.end(),0);
        int id=INT_MAX;
        if((s-nums[0])==0) return 0;
        currs+=nums[0];
        int i=1;
        for(i=1;i<n-1;i++){
            if(currs==(s-currs-nums[i])){
                id=min(id,i);
            }
            currs+=nums[i];
        }
        if(i==(n-1) && (s-nums[n-1])==0) return n-1;
        if(id==INT_MAX) return -1;
        return id;
        
    }
};