class Solution {
public:
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int k='1';k<='9';k++){
                        if(isvalid(k,i,j,board)){
                            board[i][j]=k;
                            if(solve(board)==true) return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool isvalid(int k,int i,int j,vector<vector<char>>& board){
        for(int x=0;x<9;x++){
            if(board[x][j]==k) return false;
            if(board[i][x]==k) return false;
            if(board[3*(i/3)+(x/3)][3*(j/3)+(x%3)]==k) return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};