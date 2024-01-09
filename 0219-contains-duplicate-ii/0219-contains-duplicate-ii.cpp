class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        std::unordered_map<int, int> indexMap;

        for (int i = 0; i < nums.size(); ++i) {
        auto it = indexMap.find(nums[i]);
        if (it != indexMap.end() && i - it->second <= k) {
            return true;
        }
        indexMap[nums[i]] = i;
    }

    return false;
    }
};