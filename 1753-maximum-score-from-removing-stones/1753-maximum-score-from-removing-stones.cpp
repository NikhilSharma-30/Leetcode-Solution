class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int co=0;
        while(true){
            int x1=pq.top()-1;
            pq.pop();
            int x2=pq.top()-1;
            pq.pop();
            if(x1==0) co++;
            if(x2==0) co++;
            if(co>=2) break;
            pq.push(x1);
            pq.push(x2);
            ans++;
        }
        return (ans+1);
        
    }
};