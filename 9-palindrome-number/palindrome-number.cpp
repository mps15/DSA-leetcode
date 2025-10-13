class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x<0){
            return false;
        }
        
        int original = x;

        long long reverse_x = 0;

        while (x > 0){

            int digit = x % 10;

            reverse_x = reverse_x * 10 + digit;

            x = x/10;

        }

        return original == reverse_x ;
    }


};