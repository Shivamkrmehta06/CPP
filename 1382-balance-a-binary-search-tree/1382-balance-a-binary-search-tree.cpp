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
    void inorder(TreeNode* root,vector<int> &in){
        if(root==NULL) return;
        inorder(root->left,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    TreeNode* inorderBST(int s,int e,vector<int> &in){
        if(s>e) return NULL;
        int mid = s+(e-s)/2;
        TreeNode* root = new TreeNode(in[mid]);
        root->left = inorderBST(s,mid-1,in);
        root->right = inorderBST(mid+1,e,in);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        int s = 0;
        vector<int> ans;
        inorder(root,ans);
        TreeNode* ansX = inorderBST(s,ans.size()-1,ans);
        return ansX;
    }
};