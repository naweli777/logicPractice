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
     void helperTraversal(TreeNode* root, vector<int>& result){
        
        if(root == NULL)return;
       helperTraversal(root->left, result);
       result.push_back(root->val);
       helperTraversal(root-> right,result);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>result;
        helperTraversal(root, result);
        return result;
        
    }
};