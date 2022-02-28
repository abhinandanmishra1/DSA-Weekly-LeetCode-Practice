/*
    Problem Name - [141. Linked List Cycle]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL){
            return false;
        }
       ListNode *fast=head->next->next;
        ListNode *slow=head;
        while(fast!=NULL and fast->next!=NULL){
            if(fast==slow){
                return true;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};