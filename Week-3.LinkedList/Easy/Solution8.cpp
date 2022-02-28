/*
    Problem Name - [83. Remove Duplicates from Sorted List]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;
        ListNode *temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL and temp->val==temp->next->val){
                temp->next=temp->next->next;
            }else{
                temp=temp->next;
            }
        }
        return head;
    }
};