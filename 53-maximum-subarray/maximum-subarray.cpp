class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curSum = nums[0], maxSum = nums[0];
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (curSum + nums[i] > nums[i]) {
                curSum += nums[i];
            } else {
                curSum = nums[i];
            }
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};