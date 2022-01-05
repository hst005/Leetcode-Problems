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
    int findmin(TreeNode *root){
        if(root->left==NULL){
            return root->val;
        }
        return findmin(root->left);


    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val<key){
            root->right=deleteNode(root->right,key);
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);
        }
        else{
            if(root->left==NULL && root->right==NULL){
                //delete root;
                root=NULL;
                return root;
            }
            else if(root->left==NULL){
                root=root->right;
                return root;
            }
            else if(root->right==NULL){
                root=root->left;
                return root;
            }
            else{
                int temp=findmin(root->right);
                root->val=temp;
                root->right=deleteNode(root->right,temp);
                return root;
            }

        }
         return root;
    }
};