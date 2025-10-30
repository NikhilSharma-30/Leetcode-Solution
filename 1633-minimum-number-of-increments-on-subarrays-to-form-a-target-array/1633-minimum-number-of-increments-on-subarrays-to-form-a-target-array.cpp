class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n=target.size();
        int c=target[0];
        for(int i=1;i<n;i++){
            if(target[i]>target[i-1]){
                c+=(target[i]-target[i-1]);
            }
        }
        return c;
        
    }
};