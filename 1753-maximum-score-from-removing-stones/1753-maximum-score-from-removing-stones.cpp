class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=1;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        int p=v[1]+v[0];
        if(p<v[2]) return p;
        int cal=((v[0]+v[1])-(v[2]-1))/2;
        int t=(v[2]-1);
        if((v[0]+v[1]-2*cal)==(v[2])) cal++;
        return t+cal;
    }
};