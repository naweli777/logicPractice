class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> ans;
        int total = 0;
        for (int i = 0; i < moves.size(); i++) {
            if (moves[i] == 'L') {
                ans.push_back(1);
            } else if (moves[i] == 'R') {
                ans.push_back(-1);
            } else if (moves[i] == 'U') {
                ans.push_back(-2);
            } else {
                ans.push_back(2);
            }
        }
        for (auto i : ans) {
            total += i;
        }
        if (total == 0 && ans.size() % 2 == 0) {
            return true;
        }
        return false;
    }
};
