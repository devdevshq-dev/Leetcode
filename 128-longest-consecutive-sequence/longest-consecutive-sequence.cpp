class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sortedSet;
        int maxLen = 0;
        int cnt = 1;
        int n = nums.size();
        if (n == 0) return 0;
        for (auto x : nums)
            sortedSet.insert(x);
        for (auto it : sortedSet) {
            if (sortedSet.find(it - 1) == sortedSet.end()) {
                cnt = 1;
                int x = it;
                while (sortedSet.find(x + 1) != sortedSet.end()) {
                    x = x + 1;
                    cnt++;
                }
                maxLen = max(maxLen, cnt);
            }
        }
        return n == 1 ? 1 : maxLen;
    }
};