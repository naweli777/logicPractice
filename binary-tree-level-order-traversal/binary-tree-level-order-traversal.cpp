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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> store;
        
        if(root == NULL) return store;
        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
            int levelSize = q.size();
            vector<int>levelValues;
            
            for(int i =0; i<levelSize; i++){
                TreeNode* current = q.front();
                q.pop();
                levelValues.push_back(current->val);
                
                
                if(current->left != NULL) q.push(current->left);
                if(current->right != NULL) q.push(current->right);

            }
            store.push_back(levelValues);
            
        }
        return store;
        
    }
};