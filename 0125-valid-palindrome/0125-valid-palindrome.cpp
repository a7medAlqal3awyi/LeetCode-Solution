class Solution {
public:
    bool isPalindrome(string s) {
        
        std::string clean_s;
        for (char c : s) {
            if (isalnum(c)) {
                clean_s += tolower(c);
            }
        }

        return clean_s == std::string(clean_s.rbegin(), clean_s.rend());

        
    }
};