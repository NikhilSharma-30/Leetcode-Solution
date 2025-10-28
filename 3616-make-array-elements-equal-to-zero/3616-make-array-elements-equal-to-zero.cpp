bool check(vector<int>&num){
    for(auto &i:num){
        if(i!=0) return false;
    }
    return true;
}

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n=nums.size(),co=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                v.push_back(i);
            }
        }
        int x=v.size();
        int i=0;
        while(i<x){
            vector<int>v1=nums,v2=nums;
            int curr=v[i];
            pair<int,int>p1={curr,-1};
            pair<int,int>p2={curr,1};
            p1.first--;
            while((p1.first)>=0 && (p1.first)<n){
                if(v1[p1.first]==0){
                    p1.first+=(p1.second);
                }
                else{
                    v1[p1.first]--;
                    p1.first-=(p1.second);
                    p1.second=-p1.second;
                }
            }
            if(check(v1)) co++;
            p2.first++;
            while((p2.first)>=0 && (p2.first)<n){
                if(v2[p2.first]==0){
                    p2.first+=(p2.second);
                }
                else{
                    v2[p2.first]--;
                    p2.first-=(p2.second);
                    p2.second=(-p2.second);
                }
            }
            if(check(v2)) co++;
            i++;
        }
        return co;

        
    }
};