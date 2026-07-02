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
 * @return {boolean}
 */
let height = (root)=>{
    if(root==null) return 0
    let left = height(root.left)
    let right = height(root.right)
    return Math.max(left,right)+1
}

var isBalanced = function(root) {
    if(root==null) return true
    let left = isBalanced(root.left)
    let right = isBalanced(root.right)
    let op3 = Math.abs(height(root.left)-height(root.right))<=1
    if(left&&right&&op3) return true
    else return false
};