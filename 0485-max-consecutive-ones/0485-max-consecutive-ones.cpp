class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,m=INT_MIN;
        for(auto &i:nums){
            if(i==1){
                c++;
            }
            else{
                m=max(c,m);
                c=0;
            }
        }
        m=max(m,c);
        return m;
        
    }
};