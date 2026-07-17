class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        int curRow = 1;
        int val = 1;
        while (numRows--) {
            vector<int> temp;
            temp.push_back(1);
            for (int i = 1; i < curRow; i++) {
                val = val * (curRow - i) / i;
                temp.push_back(val);
            }
            curRow++;
            sol.push_back(temp);
        }
        return sol;
    }
};