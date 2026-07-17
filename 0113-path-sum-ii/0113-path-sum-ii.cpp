class Solution {
public:
    vector<vector<int>> ans;

    void dfs(TreeNode* root, int targetSum, int sum, vector<int>& path) {
        if (root == NULL)
            return;

        sum += root->val;
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            if (sum == targetSum)
                ans.push_back(path);
        }
        dfs(root->left, targetSum, sum, path);
        dfs(root->right, targetSum, sum, path);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        dfs(root, targetSum, 0, path);
        return ans;
    }
};