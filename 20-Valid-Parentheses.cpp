class Solution {
public:
    bool isValid(string s) {
        stack<char> sh;
        for (char i : s) {
            if (i == '{' || i == '(' || i == '[') {
                sh.push(i);
            } 
            else {
                if (sh.empty()) {
                    return false;  
                }
                char top = sh.top();
                if ((i == ')' && top == '(') || 
                    (i == '}' && top == '{') || 
                    (i == ']' && top == '[')) {
                    sh.pop();
                } 
                else {
                    return false;  
                }
            }
        }
        return sh.empty();
    }
};