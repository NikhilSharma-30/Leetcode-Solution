class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int n=s.size(),l=0;
        vector<int>v,v1;
        int c=0;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                c++;
            }
            else{
                v.push_back(c+1);
                c=0;
            } 
        }
        v.push_back(c+1);
        int n1=v.size();
        if(s[0]=='0'){
            for(int i=0;i<n1;i++){
                if(i%2==0){
                    v1.push_back(0);
                }
                else{
                    v1.push_back(1);
                }
            }
        }
        else{
            for(int i=0;i<n1;i++){
                if(i%2==0){
                    v1.push_back(1);
                }
                else{
                    v1.push_back(0);
                }
            }
        }
        for(int i=1;i<n1;i++){
            if(v1[i-1]==0 && v1[i]==1){
                l=max(l,2*min(v[i-1],v[i]));
            }
        }
        return l;
        
    }
};