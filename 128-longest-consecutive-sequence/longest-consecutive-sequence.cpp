class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> sortedSet;
        for (auto x: nums) sortedSet.push_back(x);
        sort(sortedSet.begin(), sortedSet.end());
        int maxLen = 0;
        int len = 1;
        int i = 1;
        int n = sortedSet.size();
        while (i < n) {
            if (sortedSet[i] == sortedSet[i-1]+1) {
                len += 1;
            } else if(sortedSet[i] == sortedSet[i-1]) {
                maxLen = max(len, maxLen);
                i++;
                continue;
            } else {
                len = 1;
            }
            i++;
            maxLen = max(len, maxLen);
        }
        return n == 1 ? 1 : maxLen;
    }
};