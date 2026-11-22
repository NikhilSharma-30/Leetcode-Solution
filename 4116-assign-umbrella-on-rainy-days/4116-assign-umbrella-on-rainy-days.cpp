class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        int a=0,b=0;
        vector<string>ans;
        for(int i=0;i<n;i++){
            bool af=false;
            if(rain[i]==1){
                if((i+1)<n && rain[i+1]==1){
                    af=true;
                }
                if(af){
                    if(b<a){
                        ans.push_back("Bob");
                        b++;
                    }
                    else if(b>=a){
                        ans.push_back("Alice");
                        a++;
                    }
                }
                else{
                    ans.push_back("Bob");
                    b++;
                }
            }
            else{
                ans.push_back("None");
            }
        }
        return ans;
    }
};