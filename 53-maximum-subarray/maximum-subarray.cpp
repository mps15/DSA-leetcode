class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // int size = sizeof(nums) / sizeof(nums[0]); not use here because vector is not fixed array--

//--------------it is use normal array add process -----------
        // int size = nums.size();

        // int sum =0; 

        // for (int i=0; i<size; i++){

        //     sum += nums[i];
        // }

        // return sum;

//------------------but here to find maximum sub array so use kanda's algorithm-----


        int maxsum = nums[0];

        int currentSum = nums[0];

        for(int i=1; i<nums.size(); i++){

            currentSum = max(nums[i],currentSum + nums[i]);

            maxsum = max(maxsum , currentSum);

        }

        return maxsum;
    }
};

