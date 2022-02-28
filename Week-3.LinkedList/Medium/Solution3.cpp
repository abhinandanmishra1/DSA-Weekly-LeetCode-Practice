/*
    Problem Name - [24. Swap Nodes in Pairs]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next) return head;
        swap(head->val,head->next->val);
        head->next->next=swapPairs(head->next->next);
        return head;
    }
};