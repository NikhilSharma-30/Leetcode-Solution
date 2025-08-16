class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        bool f=false;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]=='6'){
                f=true;
                break;
            }
        }
        if(!f) return num;
        s[i]='9';
        return stoi(s);
    }
};