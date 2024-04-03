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
private:
    TreeNode* helperTraversal(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd, int preStart, int preEnd, unordered_map<int,int>& indexMap) {
        if (inStart > inEnd || preStart > preEnd) {
            return nullptr;
        }
        int rootVal = preorder[preStart]; // The root value is the first element in preorder traversal
        TreeNode* root = new TreeNode(rootVal); // Create a new TreeNode with the root value

        // Find the index of the root value in the inorder traversal
        int rootValIndex = indexMap[rootVal];
        // Calculate the number of nodes in the left subtree
        int numLeftNodes = rootValIndex - inStart;

        // Recursively construct left and right subtrees
        root->left = helperTraversal(preorder, inorder, inStart, rootValIndex - 1, preStart + 1, preStart + numLeftNodes, indexMap);
        root->right = helperTraversal(preorder, inorder, rootValIndex + 1, inEnd, preStart + numLeftNodes + 1, preEnd, indexMap);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // Create a map to store the indices of inorder traversal elements for quick lookup
        unordered_map<int, int> indexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            indexMap[inorder[i]] = i;
        }
        // Call the helper function to construct the binary tree recursively
        return helperTraversal(preorder, inorder, 0, inorder.size() - 1, 0, preorder.size() - 1, indexMap);
    }
};