class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        float avg=s/(1.0*n);
        int a=ceil(avg);
        int ma=*max_element(nums.begin(),nums.end());
        if(avg<0){
            int id=0;
            sort(nums.begin(),nums.end());
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
        for(int i=1;i<=ma;i++){
            bool f=true;
            for(auto &x:nums){
                if(x==i){
                    f=false;
                    break;
                }
            }
            if(f){
                if(avg==(s/n)){
                    if(i>a) return i;
                }
                else{
                    if(i>=a) return i;
                }

            }
        }
        return (ma+1);

           
    }
};