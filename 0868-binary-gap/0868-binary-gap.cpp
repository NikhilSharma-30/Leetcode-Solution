class Solution {
public:
    int binaryGap(int n) {
        string s="";
        vector<int>v;
        int m=0;
        while(n>1){
            if(n%2==1){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
            n/=2;
        }
        s.push_back('1');
        reverse(s.begin(),s.end());
        int n1=s.size();
        for(int i=0;i<n1;i++){
            if(s[i]=='1') v.push_back(i);
        }
        int n2=v.size();
        for(int i=1;i<n2;i++){
            m=max(m,v[i]-v[i-1]);
        }
        return m;

        
    }
};