/*
    Problem Name - [61. Rotate List]
    Read this blog - []
*/
// My Solution

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next or k==0) return head;
        ListNode *t1=head;
        int n=0;
        ListNode *t2=head->next;
        while(t1){
            n++;
            t1=t1->next;
        }
        
        k=k%n;
        if(k==0) return head;
        int i=0;
        t1=head;
        k=n-k;
        while(i<k-1){
            t1=t1->next;
            t2=t2->next;
            i++;
        }
        ListNode *ans=t2;
        t1->next=NULL;
        while(t2!=NULL and t2->next!=NULL and t2->next->next!=NULL){
            t2=t2->next;
        }
        if(!t2->next)
        {t2->next=head;
        }
        else if(!t2->next->next){
            t2->next->next=head;
        }
        return ans;
        
    }
};