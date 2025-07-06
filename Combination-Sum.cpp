class Solution {
public:
    void solve(vector<int>& candidates,int target,vector<vector<int>>& result,vector<int>& comb,int index,int sum){
        if(sum==target){
            result.push_back(comb); 
            return;
        }
        if(sum>target || index==candidates.size()){
            return;
        }
        comb.push_back(candidates[index]);
        solve(candidates,target,result,comb,index,sum+candidates[index]);
        comb.pop_back();
        solve(candidates,target,result,comb,index+1,sum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> comb;
        solve(candidates,target,result,comb,0,0);
        return result;
    }
    
};