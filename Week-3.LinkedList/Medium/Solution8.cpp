class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return new TreeNode(head->val);
        ListNode *slow=head,*fast=head->next->next;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode *mid=slow->next;
        ListNode *nextToMid=mid->next;
        slow->next=NULL;  // diving the linkedlist;
        TreeNode *root=new TreeNode(mid->val);
        root->left=sortedListToBST(head);
        root->right=sortedListToBST(nextToMid);
        return root;
    }
};