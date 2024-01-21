class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
   unordered_map<int, int> frequency_map;

    for (int num : nums) {
        frequency_map[num]++;
    }

    vector<int> result;
    for (const auto& entry : frequency_map) {
        result.push_back(entry.first);
    }

    partial_sort( result.begin(), result.begin() + k, result.end(),
                 [&](int a, int b) {
                     return frequency_map[a] > frequency_map[b]; 
                 });

    result.resize(k);

    return result;
}

};