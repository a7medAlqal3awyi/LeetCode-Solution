class Solution {
public:
    bool wordPattern(std::string pattern, std::string s) {
        std::unordered_map<char, std::string> charToWord;
        std::unordered_map<std::string, char> wordToChar;

        std::istringstream iss(s);
        std::vector<std::string> words;
        std::string currentWord;

        while (iss >> currentWord) {
            words.emplace_back(currentWord);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        for (size_t i = 0; i < pattern.size(); ++i) {
            char currentChar = pattern[i];
            currentWord = words[i];

            if (charToWord.count(currentChar) && charToWord[currentChar] != currentWord) {
                return false;  
            }

            if (wordToChar.count(currentWord) && wordToChar[currentWord] != currentChar) {
                return false;  
            }

            charToWord[currentChar] = currentWord;
            wordToChar[currentWord] = currentChar;
        }

        return true;
    }
};