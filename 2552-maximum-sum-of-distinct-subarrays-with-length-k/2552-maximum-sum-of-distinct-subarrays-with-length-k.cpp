class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxsum = 0, sum = 0;
        unordered_set<int> windowSet;
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            // While there's a duplicate, shrink the window from the left
            while (windowSet.count(nums[r])) {
                windowSet.erase(nums[l]);
                sum -= nums[l];
                l++;
            }

            // Add the current element to the window
            windowSet.insert(nums[r]);
            sum += nums[r];

            // When window size reaches k, check for maxsum
            if (r - l + 1 == k) {
                maxsum = max(maxsum, sum);

                // Slide the window: remove the leftmost element
                windowSet.erase(nums[l]);
                sum -= nums[l];
                l++;
            }
        }

        // If no valid subarray was found, return 0
        return maxsum == 0 ? 0 : maxsum;
    }
};