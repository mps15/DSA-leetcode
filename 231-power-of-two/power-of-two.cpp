class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n<=0){
            return false;
        }

        return (n & (n-1)) == 0;


        //or in short term to write -----

        /*
        return n>0 && (n & (n-1))==0;
        */


    }
};