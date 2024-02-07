class Solution {
public:
    vector<int> buildArray(vector<int> nums) {
        vector <int> soln;
        nums.push_back(-1);

        int count =0;
        int i =0;
        
        //just to count the no of elements in the vector
        while(nums[i] != -1){
            count ++;
            i++;
        }
        
        nums.pop_back();

        int j =0;
        for(int i=0; i<count ; i++){
            soln.push_back(nums[nums[j]]);
            j++;
        }
        return soln;
    }
};
