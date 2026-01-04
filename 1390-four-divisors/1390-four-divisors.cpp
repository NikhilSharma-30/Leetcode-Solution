class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size(),s=0;
        for(int i=0;i<n;i++){
            int val=nums[i],c=0,s1=0;
            for(int j=2;j<=(val/2);j++){
                if(val%j==0){
                    c++;
                    s1+=j;
                }
                if(c>2) break;
                if(c==2 && j==val/2){
                    s+=s1;
                    s++;
                    s+=val;
                }
            }
        }
        return s;
        
    }
};