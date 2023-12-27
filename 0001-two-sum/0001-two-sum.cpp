class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector  <int> two_nums ; 
        for(int i = 0 ;i<nums.size();i++ )
        {
            for(int o =i+1; o<nums.size();o++ )
            {
                if(nums[o]+nums[i]==target){
                    two_nums.push_back(o); 
                    two_nums.push_back(i); 

                }


            }

        }
        return two_nums; 
        
    }
};