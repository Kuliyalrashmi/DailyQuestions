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
    vector<int> largestValues(TreeNode* root) {
        if(!root)
        {
            return {};
        }
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            int max_no=INT_MIN;
            for(int i=0;i<n;i++)
            {
                TreeNode*front=q.front();
                q.pop();
                max_no=max(front->val,max_no);
                if(front->left)
                {
                    q.push(front->left);
                }
                if(front->right)
                {
                    q.push(front->right);
                }
            }
            ans.push_back(max_no);
        }
        return ans;
    }
};