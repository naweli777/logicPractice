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
    int helperSum(TreeNode* root, bool leftNode){
        
      if(!root){
          return 0;
      }
        
        if(root->left==NULL && root->right== NULL &&leftNode){
            return root->val;
        }
        
        
        
 return  helperSum(root->left,true) + helperSum(root->right, false);
        
     
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
            return helperSum(root,false);

    }
};