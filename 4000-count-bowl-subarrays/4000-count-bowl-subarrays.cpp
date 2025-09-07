class Solution {
public:
    long long bowlSubarrays(vector<int>& nums) {
        int n=nums.size(),c=0;
        stack<pair<int,int>>st;
        vector<pair<int,int>>v;
        vector<int>pg(n,-1),ng(n,n);
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        for(int i=0;i<n;i++){
            int el=v[i].first,id=v[i].second;
            while(!st.empty() && st.top().first<=el){
                st.pop();
            }
            if(st.empty()){
                pg[i]=-1;
            }
            else{
                pg[i]=st.top().second;
            }
            st.push(v[i]);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            int el=v[i].first,id=v[i].second;
            while(!st.empty() && st.top().first<=el){
                st.pop();
            }
            if(st.empty()){
                ng[i]=n;
            }
            else{
                ng[i]=st.top().second;
            }
            st.push(v[i]);
        }
        for(int i=0;i<n;i++){
            if(pg[i]!=-1 && (i-pg[i])>=2) c++;
        }
        for(int i=0;i<n;i++){
            if(ng[i]!=n && (ng[i]-i)>=2) c++;
        }
        return c;
        
    }
};