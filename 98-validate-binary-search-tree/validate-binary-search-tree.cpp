class Solution {
public:
    int find_max(TreeNode* root){
        if(root==NULL) return INT_MIN;
        else return(max(root->val,max(find_max(root->left),find_max(root->right))));
    }
    int find_min(TreeNode* root){
        if(root==NULL) return INT_MAX;
        else return(min(root->val,min(find_min(root->left),find_min(root->right))));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        if (root->left && find_max(root->left) >= root->val)
            return false;

        if (root->right && find_min(root->right) <= root->val)
            return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};