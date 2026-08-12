class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int n = s.size();
        int maxLen = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (mp[s[i]] > 1) {
                while(mp[s[i]] > 1 && j < i) {
                    mp[s[j]]--;
                    j++;
                }
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};