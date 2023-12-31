class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
           std::unordered_set<int> uniqueElements;

    for (int num : nums) {
        // If the current element is already in the set, it's a duplicate
        if (uniqueElements.find(num) != uniqueElements.end()) {
            return true;
        }

        uniqueElements.insert(num);
    }

    // If no duplicates return false
    return false;
    }
};
