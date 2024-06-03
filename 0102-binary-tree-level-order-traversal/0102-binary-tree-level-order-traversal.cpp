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
    void solve(TreeNode *root,vector<vector<int>> &ans,queue<TreeNode*> &ds){
        if (root == nullptr) return;

        ds.push(root);
        ds.push(nullptr);
        vector<int> k;
        while(!ds.empty()){
            TreeNode* temp= ds.front();
            ds.pop();
            
            if(temp==nullptr){
               ans.push_back(k);
                k.clear();
                if(!ds.empty())
                ds.push(nullptr);
            }
            else{
                k.push_back(temp->val);
                if(temp->left){
                    ds.push(temp->left);
                }
                if(temp->right){
                    ds.push(temp->right);
                }
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> ds;
        solve(root,ans,ds);
        return ans;
    }
};