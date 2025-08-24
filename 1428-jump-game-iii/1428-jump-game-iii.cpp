class Solution {
public:
    void solve(vector<int>&arr,int idx,bool &f,vector<int>&v){
        int n=arr.size();
        if(idx<0 || idx>=n) return;
        if(arr[idx]==0){
            f=true;
            return;
        }
        if(v[idx]==1) return;
        v[idx]=1;
        solve(arr,idx+arr[idx],f,v);
        solve(arr,idx-arr[idx],f,v);
        return;

    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int>v(n,0);
        int idx=start;
        bool f=false;
        solve(arr,idx,f,v);
        return f;   
    }
};