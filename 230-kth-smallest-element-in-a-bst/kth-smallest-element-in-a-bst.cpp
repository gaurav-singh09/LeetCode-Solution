class Solution {
public:
    void inorder(TreeNode* root,int k,vector<int>& ans){
        if(root==NULL) return ;
        inorder(root->left,k,ans);
        ans.push_back(root->val);
        inorder(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,k,ans);
        return ans[k-1];
    }
};