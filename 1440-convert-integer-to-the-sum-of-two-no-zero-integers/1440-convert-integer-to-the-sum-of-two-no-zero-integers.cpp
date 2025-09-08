class Solution {
public:
    bool check(int x){
        while(x>0){
            int d=x%10;
            if(d==0) return false;
            x/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>v;
        for(int i=1;i<n;i++){
            if(check(i) && check(n-i)){
                v.push_back(i);
                v.push_back(n-i);
                break;
            }

        }
        return v;   
    }
};