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

    //better than the 1st approach but not the optimised one 
    //2nd approach
    //T.C O(3n) i.e. O(n) and S.C O(n)
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;

    }
    // bool isPalindrome(ListNode* head) {
    //     ListNode* c=new ListNode(0);
    //     ListNode* tc=c;
    //     ListNode* t=head;
    //     while(t!=NULL){
            
    //         ListNode* p=new ListNode(t->val);
    //         tc->next=p;
    //         tc=tc->next;
    //         t=t->next;
            
    //     }
    //     c=c->next;
    //     c=reverse(c);
    //     ListNode* a=head;
    //     ListNode* b=c;
        
    //     while(a!=NULL){
    //         if(a->val!=b->val)return false;
    //         a=a->next;
    //         b=b->next;
    //     }
    //     return true;
    // }

    //3rd approach 
    //T.C O(1)ho jayega agar hm middle element la ke aaju baaju ka value compare kr den to
    //if 1st and 2nd half are equal then this is palindrome
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head; //head->next;(ye sirf even numbers of nodes ke liye uplabdh hoga isliye dono nodes ko head pe hi rakhenge aur whle(fas==NULL && fast->next!=NULL tk chalayenge))
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondpart=reverse(slow->next);
        slow->next=secondpart;
        ListNode* a=head;
        ListNode* b=slow->next;
        while(b){
            if(a->val!=b->val)return false;
            a=a->next;
            b=b->next;

        }
        return true;


    }
};