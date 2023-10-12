class Solution {
public:
    void reverseString(vector<char>& s) {
        reverseHelper(s, 0);
    }

    void reverseHelper(vector<char>& s, int index) {
        int n = s.size();

        if (index >= n / 2) {
            return; // Base case: Stop recursion when the pointer reaches the middle of the string.
        }

        // Swap the characters at the current index and the corresponding index from the end.
        swap(s[index], s[n - index - 1]);

        // Recursively call reverseHelper with the next index.
        reverseHelper(s, index + 1);
    }
};
