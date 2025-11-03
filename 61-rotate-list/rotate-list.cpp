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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* h=head;
        ListNode* temp=head;
        ListNode* tail=head;
        int n=0;
        while(temp!=NULL){
            if(temp->next==NULL)tail=temp;
            n++;
            temp=temp->next;
            // tail=tail->next;
        }
        if(n==0) return head;
        k=k%n;
        if(k==0) return head;
        temp=head;
        // for(int i=1;i<n;i++){
        //     tail=tail->next;
        // }
    
        for(int i=1;i<n-k;i++){
            temp=temp->next;
        }
        tail->next=head;
        h=temp->next;
        temp->next=NULL;

        return h;
        //slow aur fast ko le ke bhi banaya ja skta h 
        //s=f=head;
        //move fast tok steps forward now u will get it 

    }
};