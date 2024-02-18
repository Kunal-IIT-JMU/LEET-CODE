static int speedup = []() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}();

class Solution {
public:
    int sum (vector<int> accounts){
        int s =0;
        for(int i =0; i< accounts.size();i++){
            s += accounts[i];
        }
        return s;
    }
    int maximumWealth(vector<vector<int>> accounts) {
        int max = INT_MIN;
        for(int i = 0; i< accounts.size(); i++){
            int temp = sum(accounts[i]);
            if(max < temp){
                max = temp;
            }
        }
        return max;
    }
};
