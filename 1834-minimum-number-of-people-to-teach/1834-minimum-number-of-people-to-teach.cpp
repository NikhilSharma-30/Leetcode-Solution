class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int ans=INT_MAX;
        vector<vector<int>>over;
        int n1=friendships.size(),n2=languages.size();
        for(int i=0;i<n1;i++){
            vector<int>v1=languages[friendships[i][0]-1];
            vector<int>v2=languages[friendships[i][1]-1];
            bool f=true;
            int s1=v1.size(),s2=v2.size();
            for(int j=0;j<s1;j++){
                for(int k=0;k<s2;k++){
                    if(v1[j]==v2[k]){
                        f=false;
                        break;
                    }
                }
            }
            if(f){
                over.push_back(friendships[i]);
            }
        }
        for(int i=1;i<=n;i++){
            int count=0;
            set<int>st;
            for(auto &x:over){
                bool f1=true,f2=true;
                vector<int>v1=languages[x[0]-1];
                vector<int>v2=languages[x[1]-1];
                int s1=v1.size(),s2=v2.size();
                for(int j=0;j<s1;j++){
                    if(i==v1[j]){
                        f1=false;
                        break;
                    }
                }
                for(int k=0;k<s2;k++){
                    if(i==v2[k]){
                        f2=false;
                        break;
                    }
                }
                if(f1){
                    st.insert(x[0]-1);
                }
                if(f2){
                    st.insert(x[1]-1);
                }
            }
            count=st.size();
            ans=min(ans,count);
        }
        return ans;
    }
};