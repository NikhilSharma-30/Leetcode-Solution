class Solution {
public:
    void check(int i,int j,set<pair<int,int>>&st,vector<vector<int>>&ans){
        int x=i,y=j;
        while(x>=0){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x--;
        }
        x=i,y=j;
        while(x<8){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x++;
        }
        x=i,y=j;
        while(y<8){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            y++;
        }
        x=i,y=j;
        while(y>=0){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            y--;
        }
        x=i,y=j;
        while(x>=0 && y>=0){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x--;
            y--;
        }
        x=i,y=j;
        while(x<8 && y<8){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x++;
            y++;
        }
        x=i,y=j;
        while(x>=0 && y<8){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x--;
            y++;
        }
        x=i,y=j;
        while(x<8 && y>=0){
            if(st.find({x,y})!=st.end()){
                ans.push_back({x,y});
                break;
            }
            x++;
            y--;
        }
        return;
    }
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>>ans;
        set<pair<int,int>>st;
        for(auto &x:queens){
            st.insert({x[0],x[1]});
        }
        check(king[0],king[1],st,ans);
        return ans;
        
    }
};