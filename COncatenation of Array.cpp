class Solution {
public:
    vector<int> getConcatenation(vector<int> nums) {
        nums.push_back(0);
        int copy[1001];
        int i=0;
        while(nums[i] != 0){
            copy[i] = nums[i];
            i++;
        }
        i=0;
        int count = 0;
        while(copy[i] != 0){
            count ++;
            i++;
        }
        nums.pop_back();
        for(int i=0; i<count; i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};
