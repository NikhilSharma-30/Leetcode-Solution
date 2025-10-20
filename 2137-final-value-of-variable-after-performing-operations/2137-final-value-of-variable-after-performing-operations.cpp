class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(auto &x:operations){
            if(x=="--X"){
                --val;
            }
            else if(x=="X--"){
                val--;
            }
            else if(x=="X++"){
                val++;
            }
            else{
                ++val;
            }
        }
        return val;
        
    }
};