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
    ListNode *reverseList(ListNode *head,ListNode *stop){
        if(head==stop) return head;
        ListNode *prev=stop;
        while(head!=stop){
            ListNode *currNext=head->next;
            head->next=prev;
            prev=head;
            head=currNext;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head or !head->next) return head;
        if(left==1){
            ListNode *rightNode=head;
            int i=1;
            while(i<right){
                rightNode=rightNode->next;
                i++;
            }
            ListNode *ans=reverseList(head,rightNode->next);
            ans->next=rightNode->next;
            return ans;
        }
        ListNode *leftnode=head->next;
        ListNode *beforeleft=head;
        int i=2;
        while(i++<left){
            leftnode=leftnode->next;
            beforeleft=beforeleft->next;
        }
        ListNode *rightNode=head;
         i=1;
        while(i<right){
                rightNode=rightNode->next;
                i++;
        }
        ListNode *ans=reverseList(leftnode,rightNode->next);
        ans->next=rightNode->next;
        beforeleft->next=ans;
        return head;
    }
};