class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),ans=0;
        vector<int>v(n,0),v1;
        for(int i=0;i<n;i++){
            int m=bank[i].size();
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                    v[i]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]!=0){
                v1.push_back(v[i]);
            }
        }
        int s=v1.size();
        for(int i=1;i<s;i++){
            ans+=(v1[i-1]*v1[i]);
        }
        return ans;    
    }
};