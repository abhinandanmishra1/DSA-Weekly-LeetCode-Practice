/*
    Problem Name - [2. Add Two Numbers]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res=new ListNode();
        ListNode * ans=res;
        int carry=0;
        while(l1!=NULL and l2!=NULL){
            int sum=l1->val+l2->val+carry;
            carry=sum/10;
            ListNode *add=new ListNode(sum%10);
            res->next=add;
            res=res->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int sum=l1->val+carry;
            carry=sum/10;
            ListNode *add=new ListNode(sum%10);
            res->next=add;
            res=res->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            int sum=l2->val+carry;
            carry=sum/10;
            ListNode *add=new ListNode(sum%10);
            res->next=add;
            res=res->next;
            l2=l2->next;
        }
        if(carry>0){
            ListNode *add=new ListNode(carry);
            res->next=add;
            res=res->next;
        }
        return ans->next;
    }
};

//Recursive