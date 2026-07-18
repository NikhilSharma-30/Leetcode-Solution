class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mi=*min_element(nums.begin(),nums.end());
        int ma=*max_element(nums.begin(),nums.end());
        return gcd(mi,ma);
    }
};