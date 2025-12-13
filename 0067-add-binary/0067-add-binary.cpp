#define ll long long
class Solution {
public:
    string addBinary(string a, string b) {
        int n1=a.size(),n2=b.size();
        string ans="";
        int c=0;
        int diff=abs(n1-n2);
        string s2="";
        for(int i=0;i<diff;i++){
            s2+='0';
        }
        if(diff>0 && n1>=n2){
            b=s2+b;
        }
        else if(diff>0 && n1<n2){
            a=s2+a;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        n1=a.size();
        int i=0;
        while(i<n1){
            if((a[i]=='1' && b[i]=='0')|| (a[i]=='0' && b[i]=='1')){
                if(c==0){
                    ans+="1";
                    c=0;
                }
                else{
                    ans+="0";
                    c=1;
                }
            }
            else if(a[i]=='0' && b[i]=='0'){
                if(c==0){
                    ans+="0";
                    c=0;
                }
                else{
                    ans+="1";
                    c=0;
                }
            }
            else if(a[i]=='1' && b[i]=='1'){
                if(c==0){
                    ans+="0";
                    c=1;
                }
                else{
                    ans+="1";
                    c=1;
                }
            }
            i++;
        }
        if(c==1){
            ans+=to_string(c);
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};