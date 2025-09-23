class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n1=version1.size(),n2=version2.size();
        vector<int>v1,v2;
        string s1="",s2="";
        int i=0;
        while(i<n1){
            if(version1[i]=='.'){
                v1.push_back(stoi(s1));
                s1="";
                i++;
                continue;
            }
            s1+=version1[i];
            i++;
        }
        v1.push_back(stoi(s1));
        i=0;
        while(i<n2){
            if(version2[i]=='.'){
                v2.push_back(stoi(s2));
                s2="";
                i++;
                continue;
            }
            s2+=version2[i];
            i++;
        }
        v2.push_back(stoi(s2));
        int siz1=v1.size(),siz2=v2.size();
        int diff=abs(siz1-siz2);
        if(siz1>siz2){
            for(int i=0;i<diff;i++){
                v2.push_back(0);
            }
        }
        else if(siz2>siz1){
            for(int i=0;i<diff;i++){
                v1.push_back(0);
            }
        }
        siz1=max(v1.size(),v2.size());
        for(int i=0;i<siz1;i++){
            if(v1[i]>v2[i]){
                return 1;
            }
            else if(v1[i]<v2[i]){
                return -1;
            }
        }
        return 0;
    }
};