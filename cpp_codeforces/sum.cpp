class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = j = 0; j < nums.size(); j++) {
                
                if (nums[i] + nums[j] == target) {
                    vector<int> targeted = [nums[i], nums[j]];
                    return targeted;
                }
            }
        }
    }
};

Solution.twoSum([2, 7, 11, 15], 9)
