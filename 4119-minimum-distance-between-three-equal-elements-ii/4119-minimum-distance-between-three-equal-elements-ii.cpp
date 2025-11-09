class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size(),mi=INT_MAX;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=2;i<n;i++){
            int el1=v[i-2].first,id1=v[i-2].second;
            int el2=v[i-1].first,id2=v[i-1].second;
            int el3=v[i].first,id3=v[i].second;
            if(el1==el2 && el2==el3){
                mi=min(mi,abs(id1-id2)+abs(id2-id3)+abs(id1-id3));
            }
        }
        if(mi==INT_MAX) return -1;
        return mi; 
    }
};