class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        while(start<end){
            int ans=v[start].first+v[end].first;
            if(ans==target){
                return {v[start].second,v[end].second};
            }
            else if(ans<target){
                start++;
            }
            else{
                end--;
            }
        }
        return {};        
    }
}; 