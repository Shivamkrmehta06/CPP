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
    int hBT(TreeNode* root){
        if(root==NULL) return 0;
        int left = hBT(root->left);
        int right = hBT(root->right);
        return max(left,right)+1;
    }
    int diameter(TreeNode* root){
        if(root==NULL) return 0;
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = hBT(root->left)+hBT(root->right);
        int ans = max(op1,max(op2,op3));
        return ans;
    }
    pair<int,int> diaFast(TreeNode* root){
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return {0,0};
        }
        pair<int,int> left = diaFast(root->left);
        pair<int,int> right = diaFast(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second+right.second+1;
        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second,right.second)+1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return diaFast(root).first-1;
    }
};