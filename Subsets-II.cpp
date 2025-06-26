class Solution {
public:

    void rec(vector<int>& nums,int index,vector<vector<int>>& ans,vector<int>& subset){
        if(index==nums.size()){
            if (find(ans.begin(), ans.end(), subset) == ans.end()) {
                ans.push_back(subset);
            }
            return;
        }
        subset.push_back(nums[index]);
        rec(nums,index+1,ans,subset);
        subset.pop_back();
        rec(nums,index+1,ans,subset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        sort(nums.begin(),nums.end());
        rec(nums,0,ans,subset);
        return ans;
    }
};