class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s=flowerbed.size();
        vector<int>nums=flowerbed;
        if(n==0) return true;
        if(s==1){
            if(n==1 && nums[0]==0) return true;
            return false;
        }
        if(s==2){
            if((n==1) && nums[0]==0 && nums[1]==0) return true;
            return false;
        }
        if(nums[0]==0 && nums[1]==0){
            n--;
            nums[0]=1;
        }
        int i=1;
        while(i<s){
            if(nums[i-1]==0 && nums[i]==0){
                if((i+1)<s && nums[i+1]==0){
                    n--;
                    nums[i]=1;
                }
            }
            i++;
        }
        if(nums[s-1]==0 && nums[s-2]==0){
            nums[s-1]=1;
            n--;
        }
        if(n<=0) return true;
        return false;
        
    }
};