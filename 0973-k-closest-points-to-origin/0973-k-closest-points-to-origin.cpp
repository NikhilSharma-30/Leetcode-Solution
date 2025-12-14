class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        vector<vector<int>>ans;
        unordered_map<int,vector<vector<int>>>mp;
        priority_queue<int>pq;
        for(auto &p:points){
            int d=(p[0]*p[0])+(p[1]*p[1]);
            mp[d].push_back(p);
        }
        for(auto &x:points){
            int d=x[0]*x[0]+x[1]*x[1];
            if(pq.size()<k){
                pq.push(d);
            }
            else{
                int d1=pq.top();
                if(d<d1){
                    pq.pop();
                    pq.push(d);
                }
            }
        }
        set<int>st;
        while(!pq.empty()){
            vector<vector<int>>v=mp[pq.top()];
            for(int i=0;i<v.size();i++){
                if(st.find(pq.top())==st.end()) ans.push_back(v[i]);
            }
            st.insert(pq.top());
            if(ans.size()==k) break;
            pq.pop();
        }
        return ans;


        
    }
};