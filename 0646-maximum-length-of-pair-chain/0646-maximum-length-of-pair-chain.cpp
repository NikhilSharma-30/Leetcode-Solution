class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        int m=1,m1=1;
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<n;i++){
            vector<int>v=pairs[i];
            int c=1;
            for(int j=i+1;j<n;j++){
                if(pairs[j][0]>v[1]){
                    v=pairs[j];
                    c++;
                }
            }
            m=max(m,c);
        }
        for(int i=n-1;i>=0;i--){
            vector<int>v=pairs[i];
            int c=1;
            for(int j=i-1;j>=0;j--){
                if(v[0]>pairs[j][1]){
                    v=pairs[j];
                    c++;
                }
            }
            m1=max(m1,c);
        }
        return max(m,m1);
        
    }
};