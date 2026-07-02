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
    void solve(TreeNode* root,int k,vector<long long> &ans){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            long long size = q.size();
            long long s = 0;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                s += temp->val;
                if(temp->left){
                    q.push(temp->left);
                }if(temp->right){
                    q.push(temp->right);
                }
            }
            ans.push_back(s);
            s = 0;
        }
    }
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        solve(root,k,ans);
        if(k>ans.size()) return -1;
        sort(ans.begin(),ans.end(),greater<>());
        for(auto x:ans) cout<<x<<" ";
        return ans[k-1];
    }
};