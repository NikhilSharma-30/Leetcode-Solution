class Solution {
public:
    int solve(int x){
        int n=32-__builtin_clz(x);
        bitset<32>bit(x);
        string s=bit.to_string().substr(32-n);
        reverse(s.begin(),s.end());
        return stoi(s,0,2);
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int,int>>v;
        for(auto &x:nums){
            int c=solve(x);
            v.push_back({c,x});
        }
        sort(v.begin(),v.end());
        nums={};
        for(auto &x:v){
            nums.push_back(x.second);
        }
        return nums;
    }
};