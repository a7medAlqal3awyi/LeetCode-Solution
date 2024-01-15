#include <vector>
#include <string>

class Solution {
public:
    bool isAcronym(std::vector<std::string>& words, std::string s) {
        int i = 0;  

        for (const std::string& word : words) {
            if (!word.empty() && i < s.size() && word[0] != s[i]) {
                return false;
            }
            ++i;
        }

        return i == s.size();
    }
};
