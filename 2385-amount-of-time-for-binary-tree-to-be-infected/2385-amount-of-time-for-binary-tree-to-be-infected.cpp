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
    TreeNode* createMapping(TreeNode* root,map<TreeNode*,TreeNode*> &nodeToParent,int target){
        TreeNode* res = NULL;
        queue<TreeNode*> q;
        q.push(root);
        nodeToParent[root] = NULL;
        while(!q.empty()){
            TreeNode* front = q.front();
            q.pop();
            if(front->val==target){
                res=front;
            }
            if(front->left){
                nodeToParent[front->left] = front;
                q.push(front->left);
            }
            if(front->right){
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }
        return res;
    }
    int toInfectTree(TreeNode* targetNode,map<TreeNode*,TreeNode*> nodeToParent){
        map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(targetNode);
        visited[targetNode] = true;
        int ans=0;
        while(!q.empty()){
            int size = q.size();
            bool flag = 0;
            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left&&!visited[front->left]){
                    flag=1;
                    visited[front->left]=true;
                    q.push(front->left);
                }
                if(front->right&&!visited[front->right]){
                    flag=1;
                    visited[front->right]=true;
                    q.push(front->right);
                }
                if(nodeToParent[front]&&!visited[nodeToParent[front]]){
                    flag=1;
                    visited[nodeToParent[front]]=true;
                    q.push(nodeToParent[front]);
                }
            }
            if(flag==1) ans++;
        }
        return ans;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*> nodeToParent;
        TreeNode* target = createMapping(root,nodeToParent,start);
        int ans = toInfectTree(target,nodeToParent);
        return ans;
    }
};