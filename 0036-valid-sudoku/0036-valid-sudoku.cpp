class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            set<char>st;
            for(int j=0;j<m;j++){
                if(board[i][j]=='.') continue;
                if(st.find(board[i][j])!=st.end()){
                    return false;
                }
                st.insert(board[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            set<char>st;
            for(int j=0;j<n;j++){
                if(board[j][i]=='.') continue;
                if(st.find(board[j][i])!=st.end()){
                    return false;
                }
                st.insert(board[j][i]);
            }
        }
        for(int i=0;i<n;i+=3){
            for(int j=0;j<m;j+=3){
                set<char>st;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        int x=i+k,y=j+l;
                        if(board[x][y]=='.') continue;
                        if(x>=0 && x<n && y>=0 && y<m){
                            if(st.find(board[x][y])!=st.end()) return false;
                            st.insert(board[x][y]);

                        }
                    }
                }
            }
        }
        return true;
    }
};