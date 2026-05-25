class Solution {
public:
    TreeNode* build(vector<int>& pre, int prelo,int prehi, vector<int>& in, int inlo, int inhi){
        if(prelo>prehi) return NULL;
        TreeNode* root = new TreeNode(pre[prelo]);
        if(prelo==prehi) return root;
        int i=inlo;
        while(i<inhi){
            if(in[i]==pre[prelo]) break;
            i++;
        }
        int leftCnt=i-inlo;
        int rightCnt=inhi-i;
        root->left=build(pre, prelo+1,prelo+leftCnt, in , inlo, i-1);
        root->right=build (pre,prelo+leftCnt+1, prehi, in ,i+1, inhi);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return build(preorder,0,n-1,inorder,0,n-1);
    }
};