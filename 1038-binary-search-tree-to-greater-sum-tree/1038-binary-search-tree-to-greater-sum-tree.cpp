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
    void solve(TreeNode* root,int &sum)
    {
        if(!root)
        {
            return;
        }
        solve(root->right,sum);
        sum+=root->val;
        root->val=sum;
        solve(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int curr_sum=0;
        solve(root,curr_sum);
        return root;
    }
};