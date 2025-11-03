/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        // ListNode* pre=head->next;
        if(head==NULL|| head->next==NULL) return head;
        // int cnt=0;
        // while(temp!=NULL){
        //     cnt++;
        //     temp=temp->next;
        // } No need to count it
        // temp=head;
        // for(int i=1;i<cnt;i++){
        //     if(temp->val==pre->val){
        //         temp->next=pre->next;
        //     }
        //     pre=pre->next;
        //     else continue;
        // } no need to this


        // while(temp!=NULL && temp->next!=NULL){
        //     if(temp->val==temp->next->val){temp->next=temp->next->next;}
        //     else temp=temp->next;
        // }
        // return head;


        ListNode* a=head;
        ListNode* b=head->next;
        while(b!=NULL){
            while(b!=NULL && b->val==a->val){
                b=b->next;
            }
            a->next=b;
            //for next round
            a=b;
            if(b!=NULL) b=b->next;
        }
        return head;
    }
};