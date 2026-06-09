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
    bool isUnivalTree(TreeNode* root) {
        if(root==nullptr) return false;
        vector<int> res;
        vect(root,res);
        int n=res.size();
        for(int i=0;i<n-1;i++){
            if(res[i]!=res[i+1]) return false;
        }
        return true;
    }
    void vect(TreeNode* root,vector<int> &a){
        if(root==nullptr) return ;
        a.push_back(root->val);
        vect(root->left,a);
        vect(root->right,a);
    }
};