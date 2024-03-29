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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL||root->left==NULL&&root->right==NULL)
            return true;
        return sea(root->left,root->right);
        
        
        
    }
    bool sea(TreeNode* roota,TreeNode* rootb)
    {   
   
        if(roota==NULL && rootb==NULL)
        {
            return true;
        }
          if((roota!=NULL && rootb==NULL)||(roota==NULL && rootb!=NULL))
        {
            return false;
        }

        if(roota->val!= rootb->val)
            return false;
      
        return sea(roota->left,rootb->right)&&sea(roota->right,rootb->left);
        
        
    }
};