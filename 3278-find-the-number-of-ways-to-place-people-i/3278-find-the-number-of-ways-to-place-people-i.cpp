class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n=points.size(),c=0;
        sort(points.begin(),points.end(),greater<vector<int>>());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x1=points[i][0],y1=points[i][1];
                int x2=points[j][0],y2=points[j][1];
                int xmi=min(x1,x2),xma=max(x1,x2);
                int ymi=min(y1,y2),yma=max(y1,y2);
                bool f=true;
                for(int k=0;k<n;k++){
                    if(k!=i && k!=j){
                        int x3=points[k][0],y3=points[k][1];
                        if(x3>=xmi && x3<=xma && y3>=ymi && y3<=yma){
                            f=false;
                            break;
                        }
                    }
                }
                if(f && y1<=y2) c++;
                if(f && x1==x2) c++;
            }
        }
        return c;    
    }
};