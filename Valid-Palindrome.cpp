class Solution {
public:

    bool isPalindrome(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                temp.push_back(s[i]);
            }
            if(s[i]>='A'&&s[i]<='Z'){
                temp.push_back(s[i]+32);
            }
        }
        int st=0,end=temp.size()-1;

        while(st<=end){
            if(temp[st]!=temp[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};