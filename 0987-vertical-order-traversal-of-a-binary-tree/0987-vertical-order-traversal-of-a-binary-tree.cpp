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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>> node;
        queue<pair<TreeNode*,pair<int,int>>> q;
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> temp = q.front();
            q.pop();
            TreeNode* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            node[hd][lvl].push_back(frontNode->val);
            if(frontNode->left){
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        }
        for(auto i:node){
            vector<int> x;
            for(auto j:i.second){
                sort(j.second.begin(), j.second.end());
                for(auto k:j.second){
                    x.push_back(k);
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};