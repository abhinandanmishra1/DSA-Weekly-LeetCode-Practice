/*
    Problem Name - [19. Remove Nth Node From End of List]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int cnt=0;
        ListNode * curr=head;
        while(cnt<n){
            curr=curr->next;
            cnt++;
        }
        ListNode *slow=head;
        if(curr==NULL){
            return head->next;
        }
        while(curr->next!=NULL){
            slow=slow->next;
            curr=curr->next;
        }
        slow->next=slow->next->next;
        return head;
        
        
    }
};