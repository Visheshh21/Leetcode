class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int row=matrix.size();
        int col=matrix[0].size();
        int moves=(row*col);
        int startrow=0,startcol=0,endrow=row-1,endcol=col-1;
        int count=0;
        while(count<moves){
            for(int j=startcol;count<moves && j<=endcol;j++){
                v.push_back(matrix[startrow][j]);
                count++;
            }
            startrow++;
            for(int j=startrow;count<moves && j<=endrow;j++){
                v.push_back(matrix[j][endcol]);
                count++;

            }
            endcol--;
            for(int j=endcol;count<moves && j>=startcol;j--){
                v.push_back(matrix[endrow][j]);
                count++;
            }
            endrow--;
            for(int j=endrow;count<moves && j>=startrow;j--){
                v.push_back(matrix[j][startcol]);
                count++;
            }
            startcol++;
        }
        return v;

    }
};