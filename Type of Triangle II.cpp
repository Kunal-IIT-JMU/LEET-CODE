class Solution {
public:
    string triangleType(vector<int>& nums) {
        int sum = 0; // Initialize sum
        for (int i = 0; i < 3; i++) {
            sum += nums[i];
        }
        bool flag = true; // Initialize flag to true
        for (int j = 0; j < 3; j++) {
            if (sum - nums[j] <= nums[j]) { // Check if triangle inequality holds
                flag = false;
                break; // No need to continue checking once we find a side that violates the inequality
            }
        }
        if (flag) {
            if (nums[0] == nums[1] && nums[1] == nums[2]) {
                return "equilateral";
            }
            else if (nums[0] != nums[1] && nums[1] != nums[2] && nums[2] != nums[0]) {
                return "scalene";
            }
            else {
                return "isosceles";
            }
        }
        else {
            return "none";
        }
    }
};
