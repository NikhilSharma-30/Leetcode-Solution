class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        while(s.size()>1){
            int x=stoi(s);
            int sum=0;
            while(x>0){
                sum+=(x%10);
                x/=10;
            }
            s=to_string(sum);
        }
        return stoi(s);
        
    }
};