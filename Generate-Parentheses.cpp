class Solution {
public:
    void solve(vector<string>& ans,string comb,int n,int open,int close){
        if(comb.size()==n*2 && open==n && close==n){
            ans.push_back(comb);
            return;
        }
        if(open<n){comb.push_back('(');
        solve(ans,comb,n,open+1,close);
        comb.pop_back();}
        if(open>close){
            comb.push_back(')');
            solve(ans,comb,n,open,close+1);
            comb.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string comb="";
        vector<string> ans;
        solve(ans,comb,n,0,0);
        return ans;
    }
};