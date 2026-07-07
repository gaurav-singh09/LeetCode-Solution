class Solution {
public:
    int sum=0;
    void inorder(TreeNode* root ,int lo,int hi ){
        if(root==NULL) return;
        inorder(root->left,lo,hi);
        if(root->val==lo||(root->val>lo && root->val<hi) ||root->val==hi) sum+=root->val;
        inorder(root->right,lo,hi);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        inorder(root,low,high);
        return sum;
    }
};