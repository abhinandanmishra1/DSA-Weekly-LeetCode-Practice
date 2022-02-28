/*
    Problem Name - [206. Reverse Linked List]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head or !head->next) return head;
        ListNode *prev=NULL;
        ListNode *curr=head;
        while(curr->next!=NULL){
            ListNode *nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        curr->next=prev;
        return curr;
    }
};