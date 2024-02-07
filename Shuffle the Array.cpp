class Solution {
public:
    vector<int> shuffle(vector<int> nums, int n) {
        vector<int> soln;
        for(int i =0; i<n; i++){
            soln.push_back(nums[i]);
            soln.push_back(nums[i+n]);
        }
        return soln;
    }
};
