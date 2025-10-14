class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
                bool f1=true,f2=true;
                for(int p=i+1;p<(i+k);p++){
                    if((p-1)<n && p<n && nums[p-1]>=nums[p]){
                        f1=false;
                        break;
                    }
                }
                if((i+2*k-1)>=n) break;
                for(int q=i+k+1;q<(i+2*k);q++){
                    if((q-1)<n && q<n && nums[q-1]>=nums[q]){
                        f2=false;
                        break;
                    }
                }
                if(f1 && f2){
                    return true;
                }
        }
        return false;
    }
};