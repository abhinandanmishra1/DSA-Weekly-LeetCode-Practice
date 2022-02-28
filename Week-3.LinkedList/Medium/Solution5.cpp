/*
    Problem Name - [82. Remove Duplicates from Sorted List II]
    Read this blog - []
*/
// My Solution
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
        if(head==NULL or head->next==NULL) return head;
        ListNode *result=new ListNode();
        ListNode *ans=result;
        int prev=-106;
        ListNode *temp=head;
        while(temp!=NULL){
            int value=temp->val;
            if(temp->next!=NULL and temp->next->val==value){
                while(temp!=NULL and temp->val==value){
                    temp=temp->next;
                }
            }else{
                result->next=new ListNode(value);
                temp=temp->next;
                result=result->next;
            }
        }
        return ans->next;
    }
};