class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int m=landStartTime.size(),n=waterStartTime.size();
        int mi=INT_MAX;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(landStartTime[i]>waterStartTime[j]){
                    continue;
                }
                else{
                    int t1=landStartTime[i]+landDuration[i];
                    if(t1<waterStartTime[j]){
                        mi=min(mi,waterStartTime[j]+waterDuration[j]);
                    }
                    else{
                        mi=min(mi,t1+waterDuration[j]);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(waterStartTime[i]>landStartTime[j]){
                    continue;
                }
                else{
                    int t1=waterStartTime[i]+waterDuration[i];
                    if(t1<landStartTime[j]){
                        mi=min(mi,landStartTime[j]+landDuration[j]);
                    }
                    else{
                        mi=min(mi,t1+landDuration[j]);
                    }
                }
            }
        }
     
        
        return mi; 
    }
};