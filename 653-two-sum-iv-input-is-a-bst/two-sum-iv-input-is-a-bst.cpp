class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
        
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>nums;
        inorder(root,nums);
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(nums[i]+nums[j]==k) return true;
            else if((nums[i]+nums[j])>k) j--;
            else i++;
        }
        return false;
    }
};