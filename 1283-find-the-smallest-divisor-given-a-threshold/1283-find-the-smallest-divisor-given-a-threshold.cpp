class Solution {
public:
    int calculate(vector<int>v,int f){
        int n=v.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=((v[i]+f-1)/f);
        }
        return s;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int m=*max_element(nums.begin(),nums.end());
        int l=1,r=m;
        while(l<=r){
            int m=l+(r-l)/2;
            int val=calculate(nums,m);
            if(val<=threshold){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return r+1;
        
    }
};