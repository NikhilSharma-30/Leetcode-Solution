class Solution {
public:
    int countOdds(int low, int high) {
        int diff=(high-low);
        if(low%2==0 && high%2==0) return diff/2;
        if(low%2==0 && high%2!=0){
            high--;
            diff=high-low;
        }
        if(high%2==0 && low%2!=0){
            low++;;
            diff=high-low;
        }
        return (diff/2)+1;
    }
};