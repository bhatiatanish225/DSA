class Solution {
public:

    int missingNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        // Handle the case where the missing number is the first one
        if (nums[0] != 0)
            return 0;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1] + 1) {
                // If the current number is not consecutive to the previous one,
                // then nums[i-1] + 1 is the missing number.
                return nums[i - 1] + 1;
            }
        }

        // If no missing number is found in the sequence, then the next expected
        // number after the last one in the sequence is the missing number.
        return nums.back() + 1;
    }
};