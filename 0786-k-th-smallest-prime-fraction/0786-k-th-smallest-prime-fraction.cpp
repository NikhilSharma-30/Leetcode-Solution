class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<vector<float>>v;
        vector<int>ans;
        for(int i=n-1;i>=1;i--){
            for(int j=i-1;j>=0;j--){
                float f=arr[j]/(1.0*arr[i]);
                v.push_back({f,(float)arr[j],(float)arr[i]});
            }
        }
        sort(v.begin(),v.end());
        ans.push_back((int)v[k-1][1]);
        ans.push_back((int)v[k-1][2]);
        return ans;
        
    }
};