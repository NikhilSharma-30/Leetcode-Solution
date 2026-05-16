class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>>ans;
        vector<bool>flag(n,false);
        for(int i=0;i<n;i++){
            if(!flag[i]){
                int val=groupSizes[i];
                int c=1;
                vector<int>v;
                v.push_back(i);
                for(int j=i+1;j<n;j++){
                    if(c==val) break;
                    if(groupSizes[j]==val && !flag[j]){
                        v.push_back(j);
                        c++;
                        flag[j]=true;
                    }
                }
                ans.push_back(v);
            }

        }
        return ans;
    }
};