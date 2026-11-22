class Solution {
public:
    int countDominantElements(vector<int>& nums){
        int n=nums.size(),ans=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            int id1=i-1,id2=i+1;
            float avg=-1.0;
            if(id1>=0 && id1<n && id2>=0 && id2<n){
                avg=(nums[id1]+nums[id2])/2.000;
            }
            else if(id1>=0 && id1<n){
                avg=nums[id1];
            }
            else{
                avg=nums[id2];

            }

            if(nums[i]>=avg) ans++;

        }
        return ans;

        
    }
};