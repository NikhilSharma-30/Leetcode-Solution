class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n=grades.size(),ans=0;
        sort(grades.begin(),grades.end());
        for(int i=1;i<=n;i++){
            n-=i;
            if(n>=0) ans++;
        }
        return ans;
        
    }
};