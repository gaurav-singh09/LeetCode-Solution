class Solution {
public:
    // //1st Approach
    // ListNode* getNodeAt(ListNode* head,int idx){
    //     ListNode* temp=head;
    //     for(int i=0;i<idx;i++){

    //         temp=temp->next;
    //     }
    //     return temp;
    // }
    // ListNode* reverseList(ListNode* head) {
    //     int n=0;
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
    //         int temp =left->val;
    //         left->val=right->val;//this is good but not a right approach
    //         right->val=temp;
    //         i++;
    //         j--;
    //     }
    //     return head;
    // }

    //2nd Approach
    // ListNode* reverseList(ListNode* head) {
    //     ListNode* prev=NULL;
    //     ListNode* curr=head;
    //     ListNode* Next=NULL;
    //     while(curr!=NULL ){
    //         Next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=Next;
    //     }
    //     return prev;
    // }    


    //3rd Approach recursively
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;

    }    
    
    
};