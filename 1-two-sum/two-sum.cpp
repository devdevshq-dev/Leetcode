class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        int num1;
        int idx1;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(target - nums[i]) != s.end()) {
                num1 = nums[i];
                idx1 = i;
                break;
            }
            s[nums[i]] = i;
        }
        vector<int> arr;
        arr.push_back(idx1);
        arr.push_back(s[target-num1]);
        return arr;
    }
};