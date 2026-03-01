class Solution {
public:
    int minPartitions(string n) {
        int ans=0;
        for(auto &x:n){
            int y=x-'0';
            ans=max(ans,y);
        }
        return ans;
        
    }
};