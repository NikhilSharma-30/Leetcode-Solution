class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        float avg=s/(1.0*n);
        int i;
        int a=ceil(avg);
        int ma=*max_element(nums.begin(),nums.end());
        if(n==1){
            if(nums[0]<0) return 1;
            return (nums[0]+1);
        }
        if(avg<0){
            for(int i=1;i<=100;i++){
                bool f=true;
                for(auto &x:nums){
                    if(x==i){
                        f=false;
                        break;
                    }
                }
                if(f) return i;
            }
        }
        if(avg==(s/n)){
            for(int i=1;i<=ma;i++){
                bool f=true;
                for(auto &x:nums){
                    if(x==i){
                        f=false;
                        break;
                    }
                }
                if(i>(avg) && f) return i;
            }
        }
        else{
            for(int i=1;i<=ma;i++){
                bool f=true;
                for(auto &x:nums){
                    if(x==i){
                        f=false;
                        break;
                    }
                }
                if((i>avg) && f) return i;
            }
        }
        return (ma+1);        
    }
};