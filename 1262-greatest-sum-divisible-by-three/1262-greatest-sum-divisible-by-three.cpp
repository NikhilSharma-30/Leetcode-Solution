class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int n=nums.size(),s=0;
        sort(nums.begin(),nums.end());
        vector<int>v1,v2;
        for(auto &i:nums){
            s+=i;
            if(i%3==1){
                v1.push_back(i);
            }
            else if(i%3==2){
                v2.push_back(i);
            }
        }
        if(s%3==1 && !v1.empty()){
            if(v2.size()>=2){
                int x=v2[0]+v2[1];
                if(x<=v1[0]){
                    s-=x;
                }
                else{
                    s-=v1[0];
                }
            }
            else{
                s-=v1[0];
            }
        }
        else if(s%3==1 && v2.size()>=2){
            s-=(v2[0]+v2[1]);
        }
        else if(s%3==2 && !v2.empty()){
            if(v1.size()>=2){
                int x=v1[0]+v1[1];
                if(x<=v2[0]){
                    s-=x;
                }
                else{
                    s-=v2[0];
                }
            }
            else{
                s-=v2[0];
            }
        }
        else if(s%3==2 && v1.size()>=2){
            s-=(v1[0]+v1[1]);
        }
        if(s%3==0) return s;
        return 0;
    }
};