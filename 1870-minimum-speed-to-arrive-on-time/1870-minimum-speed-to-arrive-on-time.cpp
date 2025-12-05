class Solution {
public:
    double solve(vector<int>&d,int s){
        int n=d.size();
        double h=0;
        for(int i=0;i<n-1;i++){
            h+=ceil((double)d[i]/(double)s);
        }
        h+=((double)d[n-1]/(double)s);
        return h;
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int l=1,r=1e7;
        while(l<r){
            int m=l+(r-l)/2;
            double ho=solve(dist,m);
            if(ho<=hour){
                r=m;
            }
            else{
                l=m+1;
            }
        }
        if(solve(dist,l)<=hour) return l;
        return -1;
        
    }
};