class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        int i=0,ans=0;
        int cy=0,cn=0,ty=0,tn=0;
        if(n==1){
            if(customers[0]=='Y'){
                return 1;
            }
            return 0;
        }
        vector<int>v;
        for(auto &c:customers){
            if(c=='Y'){
                ty++;
            }
            else{
                tn++;
            }
        }
        v.push_back(ty);
        for(int i=1;i<=n;i++){
            if(customers[i-1]=='Y'){
                cy++;
            }
            else{
                cn++;
            }
            v.push_back(cn+(ty-cy));
        }
        int m=*min_element(v.begin(),v.end());
        for(int i=0;i<=n;i++){
            if(v[i]==m){
                ans=i;
                break;
            }
        }
        if(ans==1 && customers[i]!='Y'){
            return 0;
        }
        return ans;
        
    }
};