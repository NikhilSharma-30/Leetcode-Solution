class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),m=queries.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<m;i++){
            int s=queries[i];
            int currs=0,c=0;
            for(int j=0;j<n;j++){
                currs+=nums[j];
                if(currs>s) break;
                c++;
            }
            ans.push_back(c);   
        }
        return ans;      
    }
};