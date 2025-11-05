class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>v1=nums;
        int n=nums.size();
        int m=0;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        if(n%2==0){
            m=(n/2)-1;
        }
        else{
            m=(n-1)/2;
        }
        int i=m,j=n-1;
        while(i>=0 && j>=(m+1)){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i--;
            j--;
        }
        if(n%2!=0){
            ans.push_back(nums[0]);
        }
        nums=ans;
        

    }
};