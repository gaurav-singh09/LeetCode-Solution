class Solution {
public:
    //Inorder nikal lo aur bs dekho ki har agli value piche se badi ho
    TreeNode* prev=NULL;
    bool flag=true;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(prev!=NULL){
            if(root->val<=prev->val){
                flag=false;
                return;
            }
        }
        prev=root;
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {

        inorder(root);
        return flag;
    }
};