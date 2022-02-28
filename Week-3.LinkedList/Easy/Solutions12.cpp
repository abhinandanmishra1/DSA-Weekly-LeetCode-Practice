/*
    Problem Name - [203. Remove Linked List Elements]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        
        ListNode *curr=head->next,*prev=head;
        while(curr!=NULL){
            if(curr->val==val){
                prev->next=curr->next;
                curr=prev->next;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        if(head->val==val){
            return head->next;
        }
        return head;
    }
};