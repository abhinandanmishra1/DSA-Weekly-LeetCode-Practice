/*
    Problem Name - [160. Intersection of Two Linked Lists]
    Read this blog - []
*/
// My Solution
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> mp;
        ListNode *runner=headA;
        while(runner!=NULL){
            mp.insert(runner);
            runner=runner->next;
        }
        runner=headB;
        while(runner!=NULL){
            if(mp.find(runner)!=mp.end()) return runner;
            runner=runner->next;
        }
        return NULL;
    }
};