class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x1=start[0],y1=start[1];
        int x2=target[0],y2=target[1];
        int t=abs(x1-x2)+abs(y1-y2);
        if(t%2==0) return true;
        return false;
        
    }
};