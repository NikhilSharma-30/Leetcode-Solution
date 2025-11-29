bool comp(vector<int>v1,vector<int>v2){
    return v1[0]>v2[0];
};
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n =values.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            vector<int>v1={values[i],labels[i]};
            v.push_back(v1);
        }
        sort(v.begin(),v.end(),comp);
        unordered_map<int,int>mp;
        vector<vector<int>>v2;
        for(auto &x:v){
            if(mp.find(x[1])!=mp.end()){
                if(mp[x[1]]<useLimit){
                    v2.push_back(x);
                    mp[x[1]]++;
                }  
            }
            else{
                v2.push_back(x);
                mp[x[1]]++;
            }
        }
        int n2=v2.size();
        int m=min(n2,numWanted);
        int s=0;
        for(int i=0;i<m;i++){
            s+=v2[i][0];
        }
        return s;
        
        
    }
};