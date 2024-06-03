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
    void solve(TreeNode *root,int &count,queue<TreeNode*> &ds){
        if (root == nullptr) return;

        ds.push(root);
        ds.push(nullptr);
        vector<int> k;
        while(!ds.empty()){
            TreeNode* temp= ds.front();
            ds.pop();
            
            if(temp==nullptr){
               count=count+1;
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
  
    int maxDepth(TreeNode* root) {
        int count =0;
        queue<TreeNode*> ds;
        solve(root,count,ds);
        return count;
    }
};