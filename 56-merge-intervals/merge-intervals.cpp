class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        sort(intervals.begin(), intervals.end());
        sol.push_back(intervals[0]);
        int n = intervals.size();
        for (int i = 1; i < n; i++) {
            if (sol.back()[1] >= intervals[i][0]) {
                sol.back()[1] = max(sol.back()[1], intervals[i][1]);
            } else {
                sol.push_back(intervals[i]);
            }
        }
        return sol;
    }
};