class Solution {
public:
    void solve(vector<string>& board,vector<vector<string>>& ans,int row,int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++){
            if(isValid(board,row,i,n)){
                board[row][i]='Q';
                solve(board,ans,row+1,n);
                board[row][i]='.';
            }
        }
    }
    bool isValid(vector<string>& board,int row,int col,int n){
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
            if(board[row][i]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        solve(board,ans,0,n);
        return ans;
    }
};