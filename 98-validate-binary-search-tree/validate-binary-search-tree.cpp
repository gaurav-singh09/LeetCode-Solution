class Solution {
public:
    //Inorder nikal lo aur bs dekho ki har agli value piche se badi ho

    void inorder(TreeNode* root, vector<int>&ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
    }
};