class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> sortedSet;
        sort(nums.begin(), nums.end());
        int maxLen = 0;
        int len = 1;
        int i = 0;
        int n = nums.size();
        while (++i < n) {
            if (nums[i] == nums[i-1]+1) {
                len += 1;
            } else if(nums[i] == nums[i-1]) {
                maxLen = max(len, maxLen);
                continue;
            } else {
                len = 1;
            }
            maxLen = max(len, maxLen);
        }
        return n == 1 ? 1 : maxLen;
    }
};