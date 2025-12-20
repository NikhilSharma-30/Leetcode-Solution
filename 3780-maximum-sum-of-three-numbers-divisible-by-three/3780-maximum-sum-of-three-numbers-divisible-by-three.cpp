class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>v0,v1,v2;
        for(auto &i:nums){
            if(i%3==0){
                v0.push_back(i);
            }
            else if(i%3==1){
                v1.push_back(i);
            }
            else{
                v2.push_back(i);
            }
        }
        sort(v0.begin(),v0.end(),greater<int>());
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());
        int n0=v0.size(),n1=v1.size(),n2=v2.size();
        int s0=0,s1=0,s2=0,s3=0;
        if(n0>=3){
            s0=v0[0]+v0[1]+v0[2];
        }
        if(n1>=3){
            s1=v1[0]+v1[1]+v1[2];
        }
        if(n2>=3){
            s2=v2[0]+v2[1]+v2[2];
        }
        if(n0>=1 && n1>=1 && n2>=1){
            s3=v0[0]+v1[0]+v2[0];
        }
        return max(max(s0,s1),max(s2,s3));    
    }
};