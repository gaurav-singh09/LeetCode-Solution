class Solution {
public:
    TreeNode* build(vector<int>& in,int inlo, int inhi, vector<int>& post, int postlo, int posthi){
        if(postlo>posthi) return NULL;
        TreeNode* root=new TreeNode(post[posthi]);
        if(postlo==posthi) return root;
        int i=inlo;
        while(i<inhi){
            if(in[i]==post[posthi] ) break;
            i++;
        }
        int leftCnt=i-inlo;
        int rightCnt=inhi-i;
        root->left=build(in,inlo,i-1,post,postlo,postlo+leftCnt-1);
        root->right=build(in, i+1,inhi,post,postlo+leftCnt,posthi-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        return build(inorder,0,n-1,postorder,0,n-1);
        
    }
};