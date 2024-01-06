class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =nums.size();
        int sum =0; 
        for(int i =0 ;i<n; i++){
            sum+=nums[i];
        }
        int expected_sum=n*(n+1)/2;
        int miss_nums=expected_sum-sum; 
        return miss_nums; 
    }
};