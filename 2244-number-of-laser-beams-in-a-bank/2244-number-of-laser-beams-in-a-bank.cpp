class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),ans=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int m=bank[i].size(),c=0;
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                    c++;
                }
            }
            if(c!=0){
                v.push_back(c);
            }
        }
        
        int s=v.size();
        for(int i=1;i<s;i++){
            ans+=(v[i-1]*v[i]);
        }
        return ans;    
    }
};