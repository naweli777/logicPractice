class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int total = 0;

        for (const auto& op : operations) {
            if (op == "C") {
                total -= ans.back();
                ans.pop_back();
            } else if (op == "D") {
                int score = 2 * ans.back();
                total += score;
                ans.push_back(score);
            } else if (op == "+") {
                int score = ans[ans.size() - 1] + ans[ans.size() - 2];
                total += score;
                ans.push_back(score);
            } else {
                int score = stoi(op);
                total += score;
                ans.push_back(score);
            }
        }

        return total;
    }
};
