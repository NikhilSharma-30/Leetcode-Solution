class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int>st;
        for(auto &x:candyType){
            st.insert(x);
        }
        int c=st.size();
        if(c>=(n/2)) return (n/2);
        return c;
        
    }
};