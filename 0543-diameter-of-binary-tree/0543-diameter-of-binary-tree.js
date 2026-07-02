/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */

let height = (root)=>{
    if(root==null) return 0;
    let left = height(root.left);
    let right = height(root.right);
    return Math.max(left,right)+1;
}
var diameterOfBinaryTree = function(root) {
    if(root==null) return 0;
    let left = diameterOfBinaryTree(root.left);
    let right = diameterOfBinaryTree(root.right);
    let heightX = height(root.left)+height(root.right);
    return Math.max(left,Math.max(right,heightX));
};