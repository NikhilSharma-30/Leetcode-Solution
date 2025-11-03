class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int ans=INT_MIN;
        vector<int>p={},n={};
        for(auto &i:nums){
            if(i>=0){
                p.push_back(i);
            }
            else{
                n.push_back(i);
            }
        }
        sort(p.begin(),p.end(),greater<int>());
        sort(n.begin(),n.end());
        int n1=p.size(),n2=n.size();
        if(n1>=1 && n2>=2){
            ans=max(ans,p[0]*n[0]*n[1]);
        }
        if(n1>=2 && n2>=1){
            ans=max(ans,p[0]*p[1]*n[0]);
        }
        if(n1>=3){
            ans=max(ans,p[0]*p[1]*p[2]);
        }
        if(n2>=3){
            ans=max(ans,n[0]*n[1]*n[2]);
        }
        return ans;
    }
};