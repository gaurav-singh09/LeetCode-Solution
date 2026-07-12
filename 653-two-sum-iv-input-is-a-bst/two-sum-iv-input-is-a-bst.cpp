class BSTIterator{
    stack<TreeNode*>myStack;
    //reverse->true->before
    //reverse->false->next
    bool reverse=true;
public:
    BSTIterator(TreeNode* root,bool isReverse){
        reverse=isReverse;
        pushAll(root);
    }
    bool hasNext(){
        return !myStack.empty();
    }
    int next(){
        TreeNode* tempNode=myStack.top();
        myStack.pop();
        if(!reverse)pushAll(tempNode->right);
        else pushAll(tempNode->left);
        return tempNode->val;
    }

private:
    void pushAll(TreeNode* node){
        for(;node!=NULL; ){
            myStack.push(node);
            if(reverse==true) node=node->right;
            else node=node->left;
        }
    }

};

class Solution {
public:

    bool findTarget(TreeNode* root, int k) {
        if(root==NULL) return false;
        //next
        BSTIterator l(root,false);
        //for before
        BSTIterator r(root,true);
        
        int i=l.next();
        int j=r.next();
        while(i<j){
            if(i+j==k ) return true;
            else if(i+j<k) i=l.next();
            else j=r.next();
        }
        return false;
    }
};