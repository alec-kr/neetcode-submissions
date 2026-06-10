class Solution {
public:
    bool isValid(string s) {
        vector<char> currOpener;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                currOpener.push_back(s[i]);
            }

            else if (s[i] == ')') {
                if (currOpener.empty() || currOpener.back() != '(') {
                    return false;
                }
                currOpener.pop_back();
            }
            
            else if (s[i] == '}') {
                if (currOpener.empty() || currOpener.back() != '{') {
                    return false;
                }
                currOpener.pop_back();
            }
            
            else if (s[i] == ']') {
                if (currOpener.empty() || currOpener.back() != '[') {
                    return false;
                }
                currOpener.pop_back();
            }
        }

        return currOpener.empty();
    }
};