class Solution {
public:
    void solve(vector<int>&div,int n,int k,long long currp,vector<int>currl,vector<int>&ans,int st,long long rem){
        int s=div.size();
        if(currp>n || currl.size()>k) return;
        if(currp==n && currl.size()==k){
            if(ans.empty()){
                ans=currl;
            }
            else{
                int diffc=*max_element(currl.begin(),currl.end())-*min_element(currl.begin(),currl.end());
                int diffa=*max_element(ans.begin(),ans.end())-*min_element(ans.begin(),ans.end());
                if(diffc<diffa){
                    ans=currl;
                }
            }
            return;
        }
        for(int i=st;i<s;i++){
            if(rem%div[i]==0){
                currp*=(div[i]);
                currl.push_back(div[i]);
                solve(div,n,k,currp,currl,ans,i,rem/div[i]);
                currp/=(div[i]);
                currl.pop_back();
            }
        }
        return;
    }
    vector<int> minDifference(int n, int k) {
        vector<int>div,ans={},currl={};
        long long currp=1,rem=n;
        int st=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) div.push_back(i);
        }
        solve(div,n,k,currp,currl,ans,st,rem);
        return ans;
    }
};