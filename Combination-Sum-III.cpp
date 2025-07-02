class Solution {
public:
    void csum(vector<vector<int>>& ans,vector<int>& range,vector<int>& combs,int n,int k,int sum,int start){
        if(combs.size()==k && sum==n){
            ans.push_back(combs);
            return;
        }
        if(sum>n || (sum!=n && combs.size()==k) || (sum==n && combs.size()!=k)){
            return;
        }
        for(int i=start;i<range.size();i++){
            // int temp=range[i];
            if((sum+range[i])<=n){
                combs.push_back(range[i]);
                // range[i]=61;
                csum(ans,range,combs,n,k,sum+range[i],i+1);
                // range[i]=temp;
                combs.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> range={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> combs;
        csum(ans,range,combs,n,k,0,0);
        return ans;
    }
};