class Solution {
public:
    // ncr 
    // n r times / r fact 
    vector<int> rowrow(int row){
        int ans=1;
        vector<int> temp;
        temp.push_back(1);
        for(int i=1;i<row;i++){
            ans*=(row-i);
            ans/=i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> temp;
            temp=rowrow(i);
            ans.push_back(temp);
        }
        return ans;
    }
};