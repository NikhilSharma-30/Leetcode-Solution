class Solution {
public:
    int convertTime(string current, string correct) {
        int ans=0;
        string currenth=current.substr(0,2);
        string currentm=current.substr(3,2);
        string correcth=correct.substr(0,2);
        string correctm=correct.substr(3,2);
        int cuh=stoi(currenth),coh=stoi(correcth);
        int cum=stoi(currentm),com=stoi(correctm);
        int m=(60-cum)+60*(coh-(cuh+1))+(com); // 30+60+35=125
        if(m>=60){
            ans+=(m/60);
            m-=((m/60)*60);
        }
        if(m>=15){
            ans+=(m/15);
            m-=((m/15)*15);
        }
        if(m>=5){
            ans+=(m/5);
            m-=((m/5)*5);
        }
        if(m>=1){
            ans+=(m/1);
            m-=((m/1)*1);
        }
        return ans;

        
    }
};