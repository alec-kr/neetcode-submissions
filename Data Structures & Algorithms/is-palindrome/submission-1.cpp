class Solution {
public:
    bool isPalindrome(string s) {
        string originalS = "";
        string inverseS = "";
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])){
                originalS += std::tolower(s[i]);
                inverseS.insert(0, 1, std::tolower(s[i]));
            }
        }
        return inverseS == originalS;
    }
};
