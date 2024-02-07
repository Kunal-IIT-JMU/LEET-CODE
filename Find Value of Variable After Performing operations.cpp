class Solution {
public:
    int finalValueAfterOperations(vector<string> operations) {
        operations.push_back("end");
        int i=0;
        int ans =0;
        
        while(operations[i] != "end"){
            if(operations[i] == "++X"){
                ++ans;
            }
            else if(operations[i] == "X++"){
                ans ++;
            }
            else if(operations[i] == "--X"){
                --ans;
            }
            else if(operations[i] == "X--"){
                ans--;
            }
            i++;
        }
        return ans;
    }
};
