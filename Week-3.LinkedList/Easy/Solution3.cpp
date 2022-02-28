/*
    Problem Name - [1290. Convert Binary Number in a Linked List to Integer]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    
    int k=1;
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
        int smallAns=getDecimalValue(head->next);
        int currAns=k*head->val;
        k*=2;
        return currAns+smallAns;
    }
};