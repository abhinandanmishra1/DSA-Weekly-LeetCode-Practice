/*
    Problem Name - [237. Delete Node in a Linked List]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next->next!=NULL){
            node->val=node->next->val;
            node=node->next;
        }
        node->val=node->next->val;
        node->next=NULL;
    }
};