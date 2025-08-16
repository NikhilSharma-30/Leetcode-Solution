class Solution {
public:
    
    static bool comp(int &a,int &b){
        return abs(a)<abs(b);
    }
    
    long long perfectPairs(vector<int>& nums) {
        long long c=0;
        int n=nums.size();
        int i=0,j=1;
        sort(nums.begin(),nums.end(),comp);
        while(i<n){
            int x=abs(nums[i]);
            if(j<n){
                int y=abs(nums[j]);
            }
            while(j<n && abs(nums[j])<=abs(2*nums[i])){
                j++;
            }
            c+=(j-i-1);
            i++;
        }
        return c;
    }
};