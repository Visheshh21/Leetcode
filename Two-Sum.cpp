class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int blabla=target-nums[i];
            if(mpp.find(blabla)!=mpp.end()){
                return {mpp[blabla],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
}; 