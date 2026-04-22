class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n1=aliceSizes.size(),n2=bobSizes.size();
        int s1=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int s2=accumulate(bobSizes.begin(),bobSizes.end(),0);
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                int sa=s1+bobSizes[j]-aliceSizes[i];
                int sb=s2+aliceSizes[i]-bobSizes[j];
                if(sa==sb) return {aliceSizes[i],bobSizes[j]};
            }
        }
        return {0,0};
        
        
    }
};