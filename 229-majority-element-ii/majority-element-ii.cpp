class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int var1 = INT_MIN, var2 = INT_MIN;
        for (auto x: nums) {
            if (cnt1 == 0 && var2 != x) {
                cnt1 = 1;
                var1 = x;
            } else if (cnt2 == 0 && var1 != x) {
                cnt2 = 1;
                var2 = x;               
            } else if (var1 == x) {
                cnt1++;
            } else if (var2 == x) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        int min3 = nums.size() / 3 + 1;
        cnt1 = 0;
        cnt2 = 0;
        for (auto x: nums) {
            if (x == var1) cnt1++;
            if (x == var2) cnt2++;
        }
        vector<int> sol;
        if (cnt1 >= min3) {
            sol.push_back(var1);
        }
        if (cnt2 >= min3 && var1 != var2) {
            sol.push_back(var2);
        }
        return sol;
    }
};