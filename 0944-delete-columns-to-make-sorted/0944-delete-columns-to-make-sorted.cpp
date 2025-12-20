class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs.size(),n=strs[0].size(),c=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                int diff=strs[j][i]-strs[j-1][i];
                if(diff<0){
                    c++;
                    break;
                }
            }
        }
        return c;
        
    }
};