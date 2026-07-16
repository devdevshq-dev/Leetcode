class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> sol;
        sol.push_back({1});
        if (numRows == 1) return sol;  
        sol.push_back({1,1}); 
        if (numRows == 2) return sol;
        numRows -= 2;
        while (numRows) {
            vector<int> temp(sol.back().size() + 1);
            temp[0] = 1;
            temp[sol.back().size()] = 1;
            for (int i = 1; i < sol.back().size(); i++) {
                temp[i] = sol.back()[i-1] + sol.back()[i];
            }
            sol.push_back(temp);
            numRows--;
        }
        return sol;
    }
};