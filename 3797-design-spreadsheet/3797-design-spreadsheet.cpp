class Spreadsheet {
public:
    vector<vector<int>>ans;
    Spreadsheet(int rows) {
        vector<vector<int>>v(rows,vector<int>(26,0));
        ans=v;
    }
    int convert(string s){
        int col=s[0]-'A';
        string r="";
        for(int i=1;i<s.size();i++){
            r+=s[i];
        }
        int row=stoi(r)-1;
        return ans[row][col];
    }
    void setCell(string cell, int value) {
        int col=cell[0]-'A';
        string r="";
        for(int i=1;i<cell.size();i++){
            r+=cell[i];
        }
        int row=stoi(r)-1;
        ans[row][col]=value;
    }
    void resetCell(string cell) {
        int col=cell[0]-'A';
        string r="";
        for(int i=1;i<cell.size();i++){
            r+=cell[i];
        }
        int row=stoi(r)-1;
        ans[row][col]=0;
    }
    int getValue(string formula) {
        string s1="",s2="";
        int id=0;
        for(int i=1;i<formula.size();i++){
            if(formula[i]!='+'){
                s1+=formula[i];
            }
            else{
                id=i;
                break;
            }
        }
        for(int i=id+1;i<formula.size();i++){
            s2+=formula[i];
        }
        bool first=false,second=false;
        int x1=s1[0]-'0',x2=s2[0]-'0';
        if(x1>=0 && x1<=9){
            first=true;
        }
        if(x2>=0 && x2<=9){
            second=true;
        }
        if(first && second){
            return stoi(s1)+stoi(s2);
        }
        if(first || second){
            if(first){
                return stoi(s1)+convert(s2);
            }
            else{
                return convert(s1)+stoi(s2);
            }
        }
        else{
            return convert(s1)+convert(s2);
        }     
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */