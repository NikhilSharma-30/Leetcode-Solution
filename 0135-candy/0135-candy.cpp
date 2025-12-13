class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==1) return 1;
        vector<int>v(n,1);
        if(ratings[0]>ratings[1] && v[0]<=v[1]) v[0]+=((v[1]-v[0])+1);
        for(int i=1;i<n-1;i++){
            if(ratings[i]>ratings[i-1] && v[i]<=v[i-1]){
                v[i]+=((v[i-1]-v[i])+1);
            }
            if(ratings[i]>ratings[i+1] && v[i]<=v[i+1]){
                v[i]+=((v[i+1]-v[i])+1);
            }
        }
        if(ratings[n-1]>ratings[n-2] && v[n-1]<=v[n-2]) v[n-1]+=((v[n-2]-v[n-1])+1);
        for(int i=n-2;i>=1;i--){
            if(ratings[i]>ratings[i-1] && v[i]<=v[i-1]){
                v[i]+=((v[i-1]-v[i])+1);
            }
            if(ratings[i]>ratings[i+1] && v[i]<=v[i+1]){
                v[i]+=((v[i+1]-v[i])+1);
            }
        }
        if(ratings[0]>ratings[1] && v[0]<=v[1]) v[0]+=((v[1]-v[0])+1);
        int s=accumulate(v.begin(),v.end(),0);
        return s;
        
    }
};