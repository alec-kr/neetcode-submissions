class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";

        for (int i = 0; i < strs.size(); i++) {
            s += "###";
            s += std::to_string(strs[i].length());
            s += "###";
            s += strs[i];
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;

        int i = 0;

        while (i < s.length()) {
            // Skip the opening ###
            if (s.substr(i, 3) != "###") {
                break;
            }

            i += 3;

            // Find the closing ### after the length
            int lenEnd = s.find("###", i);

            // Extract the length
            int wordLen = std::stoi(s.substr(i, lenEnd - i));

            // Move past the closing ###
            i = lenEnd + 3;

            // Extract the actual word
            string word = s.substr(i, wordLen);
            v.push_back(word);

            // Move to the next encoded string
            i += wordLen;
        }

        return v;
    }
};