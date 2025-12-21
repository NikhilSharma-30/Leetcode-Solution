class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),n1=needle.size();
        int k=needle.size();
        int j=0,i=0;
        string s="";
        while(j<n){
            while((j-i+1)>k){
                if(!s.empty()){
                    s.erase(s.begin());
                }
                i++;
            }
            s.push_back(haystack[j]);
            if((j-i+1)==k && s==needle){
                return i;
            }
            j++;
        }
        return -1;
        
    }
};