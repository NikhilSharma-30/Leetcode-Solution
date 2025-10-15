class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        int c=1;
        vector<int>p(n,0),s(n,0);
        p[0]=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                c++;
                p[i]=c;
            }
            else{
                c=1;
                p[i]=c;
            }
        }
        c=1;
        for(int i=n-1;i>=0;i--){
            if(i==(n-1)){
                s[i]=c;
                continue;
            }
            if(nums[i]<nums[i+1]){
                c++;
                s[i]=c;
            }
            else{
                c=1;
                s[i]=c;
            }
        }
        int ma=1;
        for(int i=1;i<n;i++){
            ma=max(ma,min(p[i-1],s[i]));
        }
        return ma;
    }
};