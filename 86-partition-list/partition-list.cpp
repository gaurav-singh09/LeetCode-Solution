
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        // if(head==NULL || head->next==NULL) return head;
        ListNode* lo=new ListNode(0);
        ListNode* hi=new ListNode(0);
        ListNode* temp=head;
        ListNode* tl=lo;
        ListNode* th=hi;
        while(temp!=NULL){
            if(temp->val<x){   
                tl->next=temp;
                temp=temp->next;
                tl=tl->next;
            }
            else{
                th->next=temp;
                temp=temp->next;
                th=th->next;
            }
        }
        tl->next=hi->next;
        // tl->next=NULL;
        th->next=NULL;
        // lo=lo->next;
        // hi=hi->next;
        return lo->next;

        

    }
};