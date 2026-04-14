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
 bool isValidNode(TreeNode* root, long maximum ,long minimum){
    if(!root)return true;
    if(root->val >=maximum || root->val<=minimum){
        return false;
    }
    return isValidNode(root->left,root->val,minimum) && isValidNode(root->right,maximum,root->val);
 }
    bool isValidBST(TreeNode* root) {
        return isValidNode(root,LLONG_MAX,LLONG_MIN);
    }
};