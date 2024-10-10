class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     unordered_map<int,int> mpp;
    //     for(int i=0;i<nums.size();i++){
    //         mpp[nums[i]]++;
    //     }
    //     int maxx=0;
    //     int ans;
    //     for(auto i : mpp){
    //         if(i.second>maxx){
    //             ans=i.first;
    //             maxx=i.second;
    //         }
    //     }
    //     return ans;
    // }
    
    //moore's voting algo
    int majorityElement(vector<int>& nums){
        int count=0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==element) count++;
        }
        if(count>nums.size()/2) return element;
        return -1;
    }

};