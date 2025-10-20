class Solution {
public:
    int addDigits(int num) {

        int sum = num;

        while(sum >= 10){

            int temp = 0;

            while(sum > 0){

                temp = temp + (sum % 10);

                sum = sum / 10;

            }

            sum = temp;
        }       
    
        return sum;
    }    
};