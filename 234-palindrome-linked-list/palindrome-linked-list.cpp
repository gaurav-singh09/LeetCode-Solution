class Solution {
public:
    //method 1 bad appoach O(n square )T.C
    // ListNode* getNodeAt(ListNode* head,int n){
    //     ListNode* temp=head;
    //     for(int i=0;i<n;i++){

    //         temp=temp->next;
    //     }
    //     return temp;
    // }
    // bool isPalindrome(ListNode* head) {
    //      int n=0;
    //     ListNode* temp=head;
    //     ListNode* tail=head;
    //     while(temp!=NULL){
    //         temp=temp->next;
    //         n++;

    //     }
    //     int i=0;
    //     int j=n-1;
    //     while(i<j){
    //         ListNode* left=getNodeAt(head,i);
    //         ListNode* right=getNodeAt(head,j);
    //         if(left->val!=right->val)return false;
    //         i++;
    //         j--;
    //     }
    //     return true;
    // }
    //2nd approach
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* c=new ListNode(0);
        ListNode* tc=c;
        ListNode* t=head;
        while(t!=NULL){
            
            ListNode* p=new ListNode(t->val);
            tc->next=p;
            tc=tc->next;
            t=t->next;
            
        }
        c=c->next;
        c=reverse(c);
        ListNode* a=head;
        ListNode* b=c;
        
        while(a!=NULL){
            if(a->val!=b->val)return false;
            a=a->next;
            b=b->next;
        }
        return true;
    }
};