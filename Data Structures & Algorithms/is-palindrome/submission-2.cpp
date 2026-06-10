class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedS = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])){
                cleanedS += std::tolower(s[i]);
            }
        }
        return cleanedS == string(cleanedS.rbegin(), cleanedS.rend());
    }
};
