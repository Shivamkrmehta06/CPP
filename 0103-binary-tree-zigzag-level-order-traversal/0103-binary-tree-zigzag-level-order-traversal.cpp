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
    vector<vector<int>> levelOrder(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        bool LToR = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> result(size);
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = LToR?i:size-i-1;
                result[index] = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(result);
            result.clear();
            LToR = !LToR;
        }
        return ans;
    }
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        return levelOrder(root);
    }
};