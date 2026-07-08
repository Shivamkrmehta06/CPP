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
private:
    bool validate(TreeNode* root,long long max,long long min){
        if(root==NULL) return true;
        if(root->val<=min||root->val>=max) return false;
        bool left = validate(root->left,root->val,min);
        bool right = validate(root->right,max,root->val);
        return left&&right;
    }
public:
    bool isValidBST(TreeNode* root) {
        bool ans = validate(root,LLONG_MAX,LLONG_MIN);
        return ans;
    }
};