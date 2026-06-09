class Solution {
public:
    string encode(vector<string>& strs) {
        string s = "";

        // using three #s for safety. waste of memory though :(
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
            // skip the first ###
            if (s.substr(i, 3) != "###") {
                break;
            }

            // move to first char
            i += 3;

            // get the index of closing ### after the len
            int lenEnd = s.find("###", i);

            // get the length
            int wordLen = std::stoi(s.substr(i, lenEnd - i));

            // pass the closing ###
            i = lenEnd + 3;

            // get the word between the curr position and the len
            string word = s.substr(i, wordLen);
            v.push_back(word); // add to vector

            // increment to the next word/###
            i += wordLen;
        }

        return v;
    }
};