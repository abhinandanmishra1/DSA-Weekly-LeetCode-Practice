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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode *leftAns=new ListNode(0);
        ListNode *rightAns=new ListNode(0);
        ListNode *save=leftAns,*save2=rightAns;
        ListNode *temp=head;
        while(temp!=NULL){
            if(temp->val<x){
                leftAns->next=new ListNode(temp->val);
                leftAns=leftAns->next;
            }else{
                rightAns->next=new ListNode(temp->val);
                rightAns=rightAns->next;
            }
            temp=temp->next;
        }
        leftAns->next=save2->next;
        
        return save->next; 
   }
};