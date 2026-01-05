class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n=grades.size(),ans=0;
        for(int i=1;i<=n;i++){
            n-=i;
            if(n>=0) ans++;
        }
        return ans;
        
    }
};