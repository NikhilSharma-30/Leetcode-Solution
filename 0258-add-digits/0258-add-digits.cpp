class Solution {
public:
    int addDigits(int num) {
        string s=to_string(num);
        if(s.size()==1){
            return num;
        }
        if(num%9==0) return 9;
        return num%9;

        
    }
};