// LeetCode 20: Valid Parentheses

class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;

        stack<char> st;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '[' or s[i] == '(' or s[i] == '{') st.push(s[i]);
            else{
                if(st.empty()) return false;
                if(st.top() == '(' && s[i] == ')') st.pop();
                else if(st.top() == '[' && s[i] == ']') st.pop();
                else if(st.top() == '{' && s[i] == '}') st.pop();
                else return false;
            }
        }

        if(!st.empty()) return false;

        return true;
    }
};