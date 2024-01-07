class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs = 0;
        std::vector<int> count(101, 0);  

        for (int i : nums) {
            goodPairs += count[i]++;
        }

        return goodPairs;
        
    }
};