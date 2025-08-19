class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0) return false;
        sort(hand.begin(),hand.end());
        map<int,int>mp;
        for(auto &i:hand){
            mp[i]++;
        }
        for(auto &x:mp){
            int freqs=x.second;
            if(x.second==0) continue;
            for(int i=0;i<groupSize;i++){
                if(mp.find(x.first+i)==mp.end()) return false;
                if(mp[x.first+i]>0){
                    mp[x.first+i]-=freqs;
                    if(mp[x.first+i]<0) return false;
                }
            }
        }
        return true;
        
    }
};