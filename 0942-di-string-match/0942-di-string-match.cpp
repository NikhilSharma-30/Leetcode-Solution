class Solution {
public:
    vector<int> diStringMatch(string s) {
        int x=0,y=s.size();
        vector<int>v;
        int n=s.size();
        set<int>st;
        for(auto &c:s){
            if(c=='I'){
                v.push_back(x);
                st.insert(x);
                x++;
            }
            else{
                v.push_back(y);
                st.insert(y);
                y--;
            }
        }
        for(int i=0;i<=n;i++){
            if(st.find(i)==st.end()){
                v.push_back(i);
                break;
            }
        }
        return v;
        
    }
};