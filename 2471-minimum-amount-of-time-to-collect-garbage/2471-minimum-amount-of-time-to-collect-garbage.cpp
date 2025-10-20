class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n=garbage.size(),ans=0;
        int m=-1,p=-1,g=-1;
        int cm=0,cp=0,cg=0;
        for(int j=0;j<n;j++){
            string s=garbage[j];
            for(int i=0;i<s.size();i++){
                if(s[i]=='G'){
                    cg++;
                    g=max(g,j);
                }
                else if(s[i]=='P'){
                    cp++;
                    p=max(p,j);
                }
                else{
                    cm++;
                    m=max(m,j);
                }
            }
        }
        for(int i=0;i<g;i++){
            ans+=travel[i];
        }
        for(int i=0;i<p;i++){
            ans+=travel[i];
        }
        for(int i=0;i<m;i++){
            ans+=travel[i];
        }
        ans+=cg;
        ans+=cp;
        ans+=cm;
        return ans;     
    }
};