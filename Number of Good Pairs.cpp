class Solution {
public:
    int numIdenticalPairs(vector<int> nums) {
        nums.push_back(0);
        int count = 0;
        int i =0;

        //just to count the no of elements
        while(nums[i] != 0){
            count ++;
            i++;
        }
        nums.pop_back();

        int ans =0;
        for(int i=0; i<count; i++){
            for(int j=i+1; j<count; j++){
                if(nums[i] == nums[j]){
                    ans ++;
                }
            }
        }
        return ans;
    }
};
