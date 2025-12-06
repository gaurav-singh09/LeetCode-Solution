class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>v(k,NULL);
        ListNode* temp=head;
        
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        temp=head;
        int base = n/k;
        int extra=n%k;

        for(int i=0;i<k;i++){
            if(temp == NULL){
                v[i] = NULL;
                continue;
            }

            v[i] = temp;
            int partSize = base + (extra > 0 ? 1 : 0);
            extra--;

            // Traverse current part
            for(int j = 1; j < partSize; j++){
                temp = temp->next;
            }

            // Break the list
            ListNode* nextPart = temp->next;
            temp->next = NULL;
            temp = nextPart;
        }

        
    return v;
    }
};