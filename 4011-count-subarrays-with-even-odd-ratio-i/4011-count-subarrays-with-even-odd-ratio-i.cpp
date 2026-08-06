class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size(),ans=0;
        vector<int>prefe,prefo;
        int co=0,ce=0;
        float v=a/(float)b;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ce++;
            }
            prefe.push_back(ce);
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                co++;
            }
            prefo.push_back(co);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int o=0,e=0;
                if(i==0){
                    o=prefo[j];
                    e=prefe[j];
                }
                else{
                    o=prefo[j]-prefo[i-1];
                    e=prefe[j]-prefe[i-1];
                }
                if(o>0){
                    float valc=e/(float)o;
                    if(valc<=v) ans++;
                }
            }
        }
        return ans;

        
    }
};