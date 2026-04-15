class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int m=INT_MAX;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(words[i]==target){
                v.push_back(i);
            }
        }
        if(v.size()==0) return -1;
        int n1=v.size();
        for(int i=0;i<n1;i++){
            if(v[i]>=startIndex){
                int diff=v[i]-startIndex;
                m=min(m,diff);
                m=min(m,n-diff);
            }
            else{
                int diff=startIndex-v[i];
                m=min(m,diff);
                m=min(m,n-diff);
            }
        }
        return m;
       
    }
};