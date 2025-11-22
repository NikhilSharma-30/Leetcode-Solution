class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int x=num1;x<=num2;x++){
            string s="";
            int num=x;
            while(num>0){
                s+=to_string(num%10);
                num/=10;
            }
            if(s.size()>=3){
                for(int i=1;i<(s.size()-1);i++){
                    if(s[i]>s[i-1] && s[i]>s[i+1]){
                        ans++;
                    }
                    else if(s[i]<s[i-1] && s[i]<s[i+1]){
                        ans++;
                    }
                }
            }
        }
        return ans;
        
    }
};