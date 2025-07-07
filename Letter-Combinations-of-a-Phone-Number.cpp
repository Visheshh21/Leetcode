class Solution {
public:
    void solve(string digits,vector<string>& ans, vector<string>& keypad,int index,string comb){
        if(digits.size()==comb.size()){
            ans.push_back(comb);
            return;
        }
        if(digits.size()<comb.size()){
            return;
        }
        int number=digits[index]-'0';
        for(int i=0;i<keypad[number].size();i++){
            comb.push_back(keypad[number][i]);
            solve(digits,ans,keypad,index+1,comb);
            comb.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return {};
        string comb="";
        vector<string> keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,ans,keypad,0,comb);
        return ans;
    }
};