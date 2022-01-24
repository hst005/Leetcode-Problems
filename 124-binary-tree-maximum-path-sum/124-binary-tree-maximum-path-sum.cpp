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
    int ans=INT_MIN;
    int helper(TreeNode *root){
        if(root==NULL){
            return 0;   
        }
        int leftans=root->val,rightans=root->val;
        leftans+=max(helper(root->left),0);
        rightans+=max(helper(root->right),0);
        ans=max(ans,leftans+rightans-root->val);
        return max(leftans,rightans);
        
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};