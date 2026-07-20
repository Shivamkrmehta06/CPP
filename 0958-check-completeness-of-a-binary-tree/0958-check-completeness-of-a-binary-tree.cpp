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
    void countNodes(TreeNode* root,int &count){
        if(root==NULL) return;
        countNodes(root->left,count);
        count++;
        countNodes(root->right,count);
    }

    bool isCBT(TreeNode* root,int index,int count){
        if(root==NULL) return true;
        if(index>=count) return false;
        else{
            bool left = isCBT(root->left,2*index+1,count);
            bool right = isCBT(root->right,2*index+2,count);
            return left&&right;
        }
    }
public:
    bool isCompleteTree(TreeNode* root) {
        int count = 0;
        countNodes(root,count);
        cout<<count<<endl;
        int index = 0;
        bool res = isCBT(root,index,count);
        cout<<res<<endl;
        return res;
    }
};