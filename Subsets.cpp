class Solution {
public:
    void subsetprod(vector<int>& nums,int index,vector<vector<int>>& result,vector<int>& subset){
        if(index==nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        subsetprod(nums,index+1,result,subset);
        subset.pop_back();
        subsetprod(nums,index+1,result,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        subsetprod(nums,0,result,subset);
        return result;
    }
};