class Solution {
public:
    ListNode* reverse(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;

    }    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right )return head;
        //3 parts me todna hoga
        //traverse
        ListNode* t=head;
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        int n=1;
        while(t){
            if(n==left-1)a=t;
            if(n==left)b=t;
            if(n==right)c=t;
            if(n==right+1)d=t;
            t=t->next;
            n++;
        }
        if(a)a->next=NULL;
        c->next=NULL;
        c=reverse(b);
        if(a)a->next=c;
        b->next=d;
        if(a)return head;
        return c;
    }
};