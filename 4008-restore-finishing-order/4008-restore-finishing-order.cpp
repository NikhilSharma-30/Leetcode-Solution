class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int>st;
        vector<int>ans;
        for(auto &i:friends){
            st.insert(i);
        }
        for(auto &i:order){
            if(st.find(i)!=st.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};