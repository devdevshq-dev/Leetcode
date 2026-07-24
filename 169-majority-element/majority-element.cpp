class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int prev = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (prev == nums[i]) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                prev = nums[i];
                count = 1;
            }
        }
        return prev;
    }
};