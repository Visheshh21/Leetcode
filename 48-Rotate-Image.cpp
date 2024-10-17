class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        int startrow = 0, endrow = row - 1;
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=i;j<row;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        while (startrow <= endrow) {
            int startcol = 0, endcol = col - 1;
            while (startcol < endcol) {
                swap(matrix[startrow][startcol],matrix[startrow][endcol]);
                startcol++;
                endcol--;
            }
            startrow++;
        }
    }
};
