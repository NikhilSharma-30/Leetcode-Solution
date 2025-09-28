class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>l,r;
        if(n==2) return 1LL*(abs(nums[1]-nums[0]));
        l.push_back(nums[0]);
        int id=-1;
        for(int i=1;i<n;i++){
            int el=l.back();
            if(nums[i]<=el){
                id=i;
                break;
            }
            l.push_back(nums[i]);
        }
        if(id!=-1){
            r.push_back(nums[id]);
            for(int i=id+1;i<n;i++){
                int el=r.back();
                if(nums[i]>=el){
                    break;
                }
                r.push_back(nums[i]);
            }
        }
        if(l.size()==n){
            long long s=0;
            for(int i=0;i<n-1;i++){
                s+=nums[i];
            }
            return (1LL*abs(s-nums[n-1]));
        }
        if(l.size()==1 && r.size()==(n-1)){
            long long s=accumulate(r.begin(),r.end(),0LL);
            return abs(l[0]-s);
        }
        if(r.size()==1 && l.size()==(n-1) && id!=-1){
            long long el=nums[id-1];
            long long s=accumulate(l.begin(),l.end(),0LL);
            long long s1=s-el;
            long long x=abs(el+r[0]-s1);
            return min(abs(r[0]-s),x);
        }
        if((l.size()+r.size())==n && id>0){
            long long s1=accumulate(l.begin(),l.end(),0LL);
            long long s2=accumulate(r.begin(),r.end(),0LL);
            long long el=nums[id-1];
            long long x=abs((s1-el)-(s2+el));
            return min(x,abs(s1-s2));
        }
        return -1;
        
    }
};