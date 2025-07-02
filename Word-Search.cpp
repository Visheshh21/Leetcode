class Solution {
public:
    bool check(int i,int j,vector<vector<char>>& board, string word){
        if(word.size()==0) return true;
        if((i<0 || i>=board.size())||(j<0 || j>=board[0].size()) || board[i][j]!=word[0]) return false;
        char ch=board[i][j];
        board[i][j]='*';
        string s=word.substr(1);
        bool ans=false;
        ans=check(i+1,j,board,s)||check(i-1,j,board,s)||check(i,j+1,board,s)||check(i,j-1,board,s);
        board[i][j]=ch;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if (check(i, j, board, word)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};