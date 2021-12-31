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
    
    void getmaxmin(TreeNode *root,int maxi,int mini)
    {
        if(root==NULL){
            return ;
            
        }
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        
        ans=max(ans,abs(maxi-mini));
        
        getmaxmin(root->left,maxi,mini);
        getmaxmin(root->right,maxi,mini);
    }
        
    int maxAncestorDiff(TreeNode* root) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        
        getmaxmin(root,maxi,mini);
        return ans;
            
    }
};