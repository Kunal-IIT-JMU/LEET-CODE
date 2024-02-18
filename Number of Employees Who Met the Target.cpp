class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int> hours, int target) {
        int count = 0;
        for(int i=0 ; i< hours.size(); i++)
        {
            if(target <= hours[i])
            {
                count ++;
            }
        }
        return count;
    }
};
