class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        if(n==1){
            return true;
        }
        bool f=false;
        for(int i=0;i<n;i++){
            if(bits[i]==0){
                if(i==(n-1)){
                    f=true;
                }
            }
            else{
                int id=i+1;
                if(id<n){
                    i++;
                }
            }
        }
        return f;
        
    }
};