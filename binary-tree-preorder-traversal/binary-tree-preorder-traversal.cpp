/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
           vector<int> result;
        stack<TreeNode*> s;
        TreeNode* current = root;
        
        while (current != nullptr || !s.empty()) {
            if (current != nullptr) {
                result.push_back(current->val); // Visit the current node
                s.push(current); // Push the current node onto the stack
                current = current->left; // Move to the left child
            } else {
                current = s.top(); // Get the top node from the stack
                s.pop(); // Pop the top node
                current = current->right; // Move to the right child
            }
        }
        
        return result;
        
    }
};