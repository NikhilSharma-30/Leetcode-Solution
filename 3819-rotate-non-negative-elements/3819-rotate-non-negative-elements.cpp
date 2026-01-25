class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v(n,0);
        vector<int>v1,vp;
        if(n==1) return nums;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                vp.push_back(nums[i]);
            }
        }
        int n1=vp.size();
        if(n1==0) return nums;
        k=k%n1;
        if(k==0) return nums;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                v[i]=nums[i];
            }
        }
        int j=k;
        if(j<n1 && j>=0){
            for(int i=k;i<n1;i++){
                v1.push_back(vp[i]);
            } 
        }
        if(k>=0 && k<n1){
           for(int i=0;i<k;i++){
                v1.push_back(vp[i]);
           } 
        }
        j=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                v[i]=v1[j];
                j++;
            }
        }
        return v;
        





        
    }
};