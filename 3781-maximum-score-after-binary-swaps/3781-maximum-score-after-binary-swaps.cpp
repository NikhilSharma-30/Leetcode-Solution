class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        int n=nums.size();
        long long sum=0;
        int c=0,id=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
                id=max(id,i);
            }
        }
        int st=n,c1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                st=i;
                break;
            }
            else{
                c1++;
                sum+=nums[i];
            }
        }
        priority_queue<int>pq;
        for(int i=st;i<=id;i++){
            if(s[i]=='0'){
                pq.push(nums[i]);
            }
            else if(s[i]=='1'){
                if(!pq.empty() && nums[i]>pq.top()){
                    sum+=nums[i];
                }
                else{
                    sum+=pq.top();
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
        return sum;
        
    }
};