class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long r = 0;

        //reversing the number
        while (temp > 0){
            r = r*10 + temp % 10;
            temp = temp/10;
        }

        //priniting the output
        if(r == x)
            return true;
        
        else 
            return false;
    }
};
