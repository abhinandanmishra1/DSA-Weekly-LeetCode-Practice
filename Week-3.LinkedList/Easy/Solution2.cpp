/*
    Problem Name - [876. Middle of the Linked List]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        
        ListNode *fast=head->next;
        ListNode *slow=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL){
          return slow;  
        }
        return slow->next;
    }
};