class Solution {
    int sum=0;
    void reverse_inorder(TreeNode root){
        if(root==null) return;
        reverse_inorder(root.right);
        root.val+=sum;
        sum=root.val;
        reverse_inorder(root.left);
    }
    public TreeNode bstToGst(TreeNode root) {
        reverse_inorder(root);
        return root;
    }
}