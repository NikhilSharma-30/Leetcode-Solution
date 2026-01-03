class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
        int n=special.size();
        int m=0;
        sort(special.begin(),special.end());
        m=max(m,special[0]-bottom);
        m=max(m,top-special[n-1]);
        for(int i=1;i<n;i++){
            m=max(m,special[i]-special[i-1]-1);
        }
        return m;
    }
};