class Solution {
public:
    int find(vector<int>&v,int id){
        int n=v.size();
        if(v[id]>0){
            int x=v[id]%n;
            return v[(id+x)%n];
        }
        else if(v[id]<0){
            int x=abs(v[id])%n;
            return v[(id+(n-x))%n];
        }
        else{
            return v[id];
        }
    }
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>r;
        for(int i=0;i<n;i++){
            r.push_back(find(nums,i));
        }
        return r;
    }
};