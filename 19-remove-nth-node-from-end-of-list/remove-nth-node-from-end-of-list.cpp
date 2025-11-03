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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int len=0;
        

        // //3rd NOde from last get element 
        // ListNode* temp=head;
        // // ListNode* fast=head;
        // while(temp!=NULL){
        //     len++;
        //     temp=temp->next;
        // }
        // if(n==len){head=head->next;return head;}

        // //nth from end = len-n+1 from start
        // int m=len-n+1;
        // int idx=m-1;// idx of node to be deleted
        // temp=head;
        // for(int i=1;i<=idx-1;i++){
        //     temp=temp->next;
        // }
        // if(temp!=NULL)temp->next=temp->next->next;
        // // else head=head->next;
        // return head; 
            ///Not the best method 

            //best MEthod;
            //in interview
        ListNode* slow=head;
        ListNode* fast=head;
        // ListNode* pre=nullptr;
        //But yahan next-> baar nhi kr skte isliye for loop use kr ke ek baar n tk kr denge 
        // fast=fast->next->next->next;//if n=3
        //Thus
        for(int i=1;i<=n+1;i++){
            if(fast==NULL)return head->next;
            fast=fast->next;
        }
        while(fast!=NULL ){
            //dono ko ek ek krke aage badao
            // pre=slow;
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        
        return head;
    }
};