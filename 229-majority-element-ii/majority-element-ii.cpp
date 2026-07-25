class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (auto x: nums) {
            mp[x]++;
        }
        vector<int> sol;
        for (auto x: mp) {
            if (x.second > n / 3) {
                sol.push_back(x.first);
            }
        }
        return sol;
    }
};