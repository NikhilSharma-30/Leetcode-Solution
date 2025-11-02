class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        set<int>s;
        int ma=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        for(auto &i:nums){
            s.insert(i);
        }
        for(int i=mi;i<=ma;i++){
            if(s.find(i)==s.end()) v.push_back(i);
        }
        return v;
    }
};