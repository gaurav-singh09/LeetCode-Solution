class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }  
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* p=head;
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* c=slow->next;
        c=reverse(c);
        slow->next=NULL;
        ListNode* d=new ListNode(0);
        ListNode* td=d;
        ListNode* a=p;
        ListNode* ta=a;
        ListNode* b=c;
        ListNode* tb=c;
        
        while(tb){
            td->next=ta;
            td=td->next;
            ta=ta->next;
            td->next=tb;
            td=td->next;
            tb=tb->next;
            
        }
        td->next=ta;
        head=a;
        
    }
};