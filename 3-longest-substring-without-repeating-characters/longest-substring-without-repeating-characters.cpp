class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string str = "";
        int i = 0, n = s.size();
        int maxLen = 0;
        int j = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            if (mp[s[i]] > 1) {
                char ch = s[i];
                while (j < i) {
                    mp[s[j]]--;
                    j++;
                    if (mp[ch] < 2) {
                        break;
                    }
                }
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};