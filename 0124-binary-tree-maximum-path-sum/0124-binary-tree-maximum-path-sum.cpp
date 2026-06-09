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
    int maxPathSum(TreeNode* root) {
        int s=INT_MIN;
        maxs(root,s);
        return s;
    }
    int maxs(TreeNode* root,int &s){
        if(root==nullptr) return 0;
        int lh=max(0,maxs(root->left,s));
        int rh=max(0,maxs(root->right,s));
        s=max(s,lh+rh+root->val);
        return max(lh,rh)+root->val;
    }
};