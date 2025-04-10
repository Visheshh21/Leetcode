class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vec(26,0);
        //vector<int> vis(26,0);

        int a=0;
        for(int i=0;i<s.size();i++){
            a=s[i]-'a';
            vec[a]++;
        }
        int b;
        for(int i=0;i<t.size();i++){
            b=t[i]-'a';
            vec[b]--;
        }
        for(int i=0;i<26;i++){
            if(vec[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};