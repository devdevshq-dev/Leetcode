class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long n = grid.size() * grid.size(); 
        long sumOfN = (n * (n + 1)) / 2;
        long sumOfSqOfN = (n * (n + 1) * ( (2 * n) + 1)) / 6;
        long sumOfGrid = 0;
        long sumOfSqGrid = 0;
        for (auto row: grid) {
            for (auto ele: row) {
                sumOfGrid += ele;
                sumOfSqGrid += ele * ele;
            }
        }
        long amb = sumOfN - sumOfGrid;
        long apb = (sumOfSqOfN - sumOfSqGrid) / amb;
        long a = (amb + apb) / 2;
        long b = (apb - amb) / 2;
        vector<int> sol;
        sol.push_back(b);
        sol.push_back(a);
        return sol;
    }
};