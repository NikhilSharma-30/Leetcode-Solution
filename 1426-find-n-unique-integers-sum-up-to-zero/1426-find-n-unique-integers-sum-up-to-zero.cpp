class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        for(int i=1;i<n;i++){
            v.push_back(i);
        }
        v.push_back(-1*(n*(n-1))/2);
        return v;
    }
};