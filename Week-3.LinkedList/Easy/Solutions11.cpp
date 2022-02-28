/*
    Problem Name - [234. Palindrome Linked List]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    bool isPalindrome(ListNode* head) {
       vector<int> arr;
        if(!head) return true;
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        auto arr2=arr;
        reverse(arr2.begin(),arr2.end());
        return arr==arr2;
    }
};