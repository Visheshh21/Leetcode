class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxx=INT_MIN;
        
        // sort(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         maxx=max(count,maxx);
        //         continue;
        //     }
        //     if(nums[i+1]==nums[i]+1){
        //         count++;
        //     }
        //     else{
        //         count=1;
        //         continue;
        //     }
        //     maxx=max(count,maxx);
        // }
        // return maxx;
        unordered_set<int> hehe;
        hehe.insert(nums.begin(),nums.end());
        for(auto i:hehe){
            if(hehe.find(i-1)==hehe.end()){
                int count=1;
                int x=i;
                while(hehe.find(x+1)!=hehe.end()){
                    x=x+1;
                    count++;
                }
                maxx=max(count,maxx);
            }
            
        }
        return maxx;
    }
};