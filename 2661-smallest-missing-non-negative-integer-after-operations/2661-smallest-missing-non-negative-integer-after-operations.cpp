class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int val) {
        int n=nums.size();
        set<int>s;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                int x=ceil(abs(nums[i])/(double)val);
                nums[i]=nums[i]+x*val;
                continue;
            }
            nums[i]=(abs(nums[i])%val);
        }
        for(auto &i:nums){
            mp[i]++;
            s.insert(i+(mp[i]-1)*val);
        }
        int i=0;
        for(i=0;i<n;i++){
            if(s.find(i)==s.end()){
                return i;
            }
        }
        return i;    
    }
};