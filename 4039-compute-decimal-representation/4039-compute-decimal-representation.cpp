class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        int p=0;
        while(n>0){
            int elem=(n%10)*(int)pow(10,p);
            if(elem==0){
                n/=10;
                p++;
                continue;
            }
            ans.push_back(elem);
            n/=10;
            p++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};