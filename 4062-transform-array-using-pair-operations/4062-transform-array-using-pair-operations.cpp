class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long ss=accumulate(source.begin(),source.end(),0LL);
        long long ts=accumulate(target.begin(),target.end(),0LL);
        if(ss==ts) return true;
        return false;

        


        
    }
};