#define ll long long
class Solution {
public:
    long long minMoves(vector<int>& balance) {
        int n=balance.size();
        ll s=0,ans=0;
        int id=-1,el=0;
        for(int i=0;i<n;i++){
            if(balance[i]>=0){
                s+=balance[i];
            }
            else{
                id=i;
                el=balance[i];
            }
        }
        if(id==-1) return 0;
        if(abs(el)>s) return -1;
        vector<pair<int,int>>dist;
        for(int i=0;i<n;i++){
            if(balance[i]>0){
                int m=min(abs(id-i),(n-abs(i-id)));
                dist.push_back({m,balance[i]});
            }
        }
        sort(dist.begin(),dist.end());
        for(auto &x:dist){
            if(el>=0) break;
            if(el<0){
                int diff=x.second+el;
                int dist=x.first,val=x.second;
                if(diff<0){
                    el+=val;
                    ans+=(val*dist);
                }
                else{
                    ans+=(abs(el)*1LL*dist);
                    el=0;
                }
            }
        }
        return ans;
        
    }
};