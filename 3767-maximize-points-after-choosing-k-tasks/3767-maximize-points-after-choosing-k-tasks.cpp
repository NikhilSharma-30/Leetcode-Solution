#define ll long long
class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        ll s=0;
        vector<int>t1=technique1,t2=technique2;
        int n=technique1.size();
        if(k==0){
            for(int i=0;i<n;i++){
                s+=max(t1[i],t2[i]);
            }
            return s;
        }
        s=accumulate(t1.begin(),t1.end(),0LL);
        int x=n-k;
        vector<int>diff;
        for(int i=0;i<n;i++){
            diff.push_back(t2[i]-t1[i]);
        }
        sort(diff.begin(),diff.end(),greater<int>());
        if(diff[0]<=0) return s;
        for(int i=0;i<x;i++){
            if(diff[i]>0){
                s+=diff[i];
            }
        }
        return s;


        
    }
};