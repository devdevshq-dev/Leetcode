class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        /*
            1. find the number which is just smaller than the next element
            2. if no such index, already greatest premutation; return reversed array
            3. find the element which is just greater than numbers[index] and swap
            4. reverse the number[] after index to n
        */
        int n = nums.size();
        int index = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
        return;
    }
};