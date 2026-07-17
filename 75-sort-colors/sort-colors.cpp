class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*
            1. define 3 vars low, mid and high as 0,0 and n - 1
            2. run loop like binary search from mid <= high
            3. if mid == 0 swap(arr[low++], arr[mid++])
            4. if mid == 1 mid++
            5. if mid == 2 swap(arr[high--], arr[mid])
        */
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 2) {
                swap(nums[mid], nums[high--]);
            } else if (nums[mid] == 0) {
                swap(nums[mid++], nums[low++]);
            } else {
                mid++;
            }
        }
    }
};