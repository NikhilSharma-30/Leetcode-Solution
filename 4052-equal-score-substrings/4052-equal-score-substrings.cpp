class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        int sum=0;
        for(auto &c:s){
            int x=(c-'a')+1;
            sum+=x;
        }
        if(sum%2!=0) return false;
        int s1=0;
        for(auto &c:s){
            int x=(c-'a')+1;
            s1+=x;
            if(s1==(sum/2)) return true;
        }
        return false;

        
    }
};