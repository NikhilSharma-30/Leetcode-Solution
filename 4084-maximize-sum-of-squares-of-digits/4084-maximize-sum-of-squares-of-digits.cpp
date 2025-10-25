class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        int n=num,s=sum;
        string st="";
        bool f=false;
        if(n==1){
            if(s>9) return "";
            string s1="";
            char c='0'+s;
            s1+=c;
            return s1;

        }
        for(int i=0;i<n;i++){
            for(int i=9;i>=0;i--){
                if(st.size()==n && s==0){
                    f=true;
                }
                if((s-i)>=0){
                    char c='0'+i;
                    st+=c;
                    s-=i;
                    break;
                }
            }
            if(f) break;
        }
        if(s==0) return st;
        return "";    
    }
};