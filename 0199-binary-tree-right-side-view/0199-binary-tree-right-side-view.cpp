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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        find(root,ans,0);
        return ans;
    }

private:
    void find(TreeNode* node,vector<int> &ans,int level){
        if(!node) return ;
        if(level == ans.size()) ans.push_back(node->val);
        find(node->right,ans,level+1);
        find(node->left,ans, level+1);
    }    
};