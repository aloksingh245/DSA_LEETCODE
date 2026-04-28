class Solution {
public:
    bool isValid(string str) {
        stack<char> c;

        for(int i = 0; i < str.size(); i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                c.push(str[i]);
            }
            else {
                if(c.empty()) {
                    return false;
                }

                if((c.top() == '(' && str[i] == ')') ||
                   (c.top() == '{' && str[i] == '}') ||
                   (c.top() == '[' && str[i] == ']')) {
                    c.pop();
                }
                else {
                    return false;
                }
            }
        }
        return c.empty();

        
    }
};