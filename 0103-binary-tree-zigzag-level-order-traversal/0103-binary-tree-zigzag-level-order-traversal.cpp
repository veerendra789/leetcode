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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res=mat(root);
        return res;
    }
    vector<vector<int>> mat(TreeNode* head){
        vector<vector<int>> ans;
        if(head==nullptr) return ans;
        queue<TreeNode*> q;
        q.push(head);
        bool sta=true;
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left!=nullptr) q.push(temp->left);
                if(temp->right!=nullptr) q.push(temp->right);

            }
            if(sta==false) reverse(level.begin(),level.end());
            sta=!sta;
            ans.push_back(level);
        }
        return ans;
    }
};