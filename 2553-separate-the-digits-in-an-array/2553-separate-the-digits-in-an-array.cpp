class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        for(auto &x:nums){
            int num=x;
            vector<int>v1;
            while(num>0){
                v1.push_back(num%10);
                num/=10;
            }
            reverse(v1.begin(),v1.end());
            for(int i=0;i<v1.size();i++){
                v.push_back(v1[i]);
            }
        }
   
        return v;
    
    }
};