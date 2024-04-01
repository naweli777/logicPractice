class Solution {
private:
    TreeNode* helperTraversal(vector<int>& inorder, vector<int>& postorder, int inStart, int inEnd, int postStart, int postEnd, unordered_map<int, int>& indexMap) {
        if (inStart > inEnd || postStart > postEnd) 
            return nullptr;
        
        int rootVal = postorder[postEnd];
        TreeNode* root = new TreeNode(rootVal);

        int rootValIndex = indexMap[rootVal];
        int numLeftNodes = rootValIndex - inStart;

        root->left = helperTraversal(inorder, postorder, inStart, rootValIndex - 1, postStart, postStart + numLeftNodes - 1, indexMap);
        root->right = helperTraversal(inorder, postorder, rootValIndex + 1, inEnd, postStart + numLeftNodes, postEnd - 1, indexMap);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> indexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            indexMap[inorder[i]] = i;
        }
        return helperTraversal(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1, indexMap);
    }
};
