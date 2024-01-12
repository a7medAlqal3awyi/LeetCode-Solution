class Solution {
public:
    char findTheDifference(string s, string t) {
        
        char result = 0;
        for (char ch : t) {
            result ^= ch;
        }

        for (char ch : s) {
            result ^= ch;
        }

        return result;
        
    }
};